# adapted from https://github.com/Exant64/sa2dc/blob/main/makefile

#I used the zeldaret oot makefile as reference cuz i never did makefile before, sorry about that lol

#idk how we should do this with other overlay files + 1st_read later on

1ST_READ_ROM := build/1ST_READ.BIN
1ST_READ_ELF := $(1ST_READ_ROM:.BIN=.elf)
1ST_READ_OBJ := build/1ST_READ.o
1ST_READ_ASM := build/1ST_READ.s
1ST_READ_LDSCRIPT := 1st_read.gnu.ld

COMPARE ?= 1

LINK_ORDER := start main sbinit split1 system game split2 screen split3 flag \
              light split4 sdfunc split5 sync end
C_GAS_FILES := $(addprefix build/src/,$(addsuffix .s,$(LINK_ORDER)))
ASM_GAS_FILES := build/asm/code_126948.s build/asm/code_1311e0.s
GAS_FILES := $(C_GAS_FILES) $(ASM_GAS_FILES)

#using inline_asm automatically creates a .align 4, rts, and nop at the end of the function regardless of its contents
#we have to remove those to be able to include asm
#i guess this is sort of our equivalent of asm-processor
PYTHON := /usr/bin/env python3
BASH := /usr/bin/env bash
FIX_INLINE := $(PYTHON) tools/fix_inline_asm.py
FIX_INLINE_C := $(PYTHON) tools/inline_asm_c.py
DCSPLIT := $(PYTHON) tools/dcsplit/dcsplit.py

# path conversion for msys2 (msys2 doesnt seem to automatically convert foo/bar paths because windows apps are
# apparently supposed to support that, except SHC doesn't lol) (pls correct me if im wrong)
PATHHELP := $(BASH) tools/path_helper.sh

SHC_DIR := shc
CC := $(SHC_DIR)/bin/shc.exe
CROSS ?= sh-elf-
AS := $(CROSS)as
LD := $(CROSS)ld
SHC_TO_GAS := tools/shc_to_gas
WINPATH := $(BASH) tools/winpath.sh
WIBO := tools/wibo

OBJCOPY := $(CROSS)objcopy

# wibo doesn't convert env vars yet afaik, so we do it manually
export SHC_LIB := $(shell $(WINPATH) $(abspath $(SHC_DIR)/bin))
export SHC_TMP := $(shell $(WINPATH) $(abspath $(SHC_DIR)/temp))

#the source dir (original layout was like that too) and katana includes
INCLUDEDIRS := src,Include,$(SHC_DIR)\\include

CFLAGS := -comment=nonest -cpu=sh4 -division=cpu -fpu=single -endian=little -optimize=1 -pic=0 -macsave=0 \
	-speed -sjis -loop -string=const -round=nearest -inline -aggressive=2 -code=asmcode -include=$(INCLUDEDIRS)

ASFLAGS := --isa=sh4 -little
LDFLAGS := -EL -T $(1ST_READ_LDSCRIPT) -Map build/1ST_READ.map

BUILD_DIRS := build build/src build/asm shc/temp

all: $(1ST_READ_ROM)
ifeq ($(COMPARE),1)
	@md5sum -c checksum.md5
endif

check:
	@test -f rom/1ST_READ.BIN || { echo "missing rom/1ST_READ.BIN" >&2; exit 1; }
	@test -f $(CC) || { echo "missing SHC compiler: $(CC)" >&2; exit 1; }
	@sed 's|build/1ST_READ.BIN|rom/1ST_READ.BIN|' checksum.md5 | md5sum -c -

setup: check
	$(MAKE) -C tools
	$(DCSPLIT) 1st_read.yaml

clean:
	$(RM) -r build

.PHONY: all check clean setup

$(BUILD_DIRS):
	mkdir -p $@

$(1ST_READ_ROM): $(1ST_READ_ELF) | build
	$(OBJCOPY) -O binary $< $@

$(1ST_READ_ELF): $(1ST_READ_OBJ) $(1ST_READ_LDSCRIPT) | build
	$(LD) $(LDFLAGS) -o $@ $(1ST_READ_OBJ)

$(1ST_READ_OBJ): $(1ST_READ_ASM) | build
	$(AS) $(ASFLAGS) -o $@ $<

$(1ST_READ_ASM): $(GAS_FILES) | build
	cat $^ > $@

build/src/%.src: src/%.c | build/src shc/temp
	$(FIX_INLINE_C) $< build/$<
	$(PATHHELP) $(WIBO) $(CC) build/$< $(CFLAGS) -objectfile=$@
	$(FIX_INLINE) $@

build/src/%.s: build/src/%.src $(SHC_TO_GAS)
	$(SHC_TO_GAS) < $< > $@

build/asm/%.s: asm/%.src $(SHC_TO_GAS) | build/asm
	$(SHC_TO_GAS) < $< > $@

$(SHC_TO_GAS): tools/shc_to_gas.cpp
	$(MAKE) -C tools shc_to_gas
