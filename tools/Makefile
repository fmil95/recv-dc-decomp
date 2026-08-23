# adapted from https://github.com/Exant64/sa2dc/blob/main/tools/Makefile

CFLAGS := -Wall -Wextra -pedantic -std=c99 -g -O2
CXXFLAGS := -Wall -Wextra -pedantic -std=c++17 -O2
CC := gcc
CXX := g++

all: shc_to_gas

clean:
	$(RM) elf2bin.exe elf2bin shc_to_gas.exe shc_to_gas

.PHONY: all clean

elf2bin: elf2bin.c
	$(CC) $(CFLAGS) $^ -o $@

shc_to_gas: shc_to_gas.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
