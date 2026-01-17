INLINE_ASM(_bhCalcVtxBuffer, 0x44, "asm/nonmatching/./system/_bhCalcVtxBuffer.src");

// MERGE_LIST([["h'016001C4", 452], ["h'0FFF0160", 352], ["h'F0000FFF", 4095], ["h'4000F000", 61440], ['_hws', '_lbl_8C016CF0']]);
INLINE_ASM(_bhChangeHWSetting, 0x1d4, "asm/nonmatching/./system/_bhChangeHWSetting.src");

INLINE_ASM(_bhInitSystem, 0x144, "asm/nonmatching/./system/_bhInitSystem.src");

INLINE_ASM(_bhInitRoomChangeSystem, 0x1fa, "asm/nonmatching/./system/_bhInitRoomChangeSystem.src");

// MERGE_LIST([['_njSetAspect', '_lbl_8C017300'], ['_BHD_ASPECT_Y', '_lbl_8C0172FC'], ["h'0002A5A8", '_lbl_8C017304'], ["h'000288B8", '_lbl_8C0172E4'], ["h'00021974", '_lbl_8C0172E8'], ["h'00022244", '_lbl_8C0172EC'], ["h'0002A6C8", '_lbl_8C0172F0'], ['_BHD_ASPECT_X', '_lbl_8C0172F8'], ["h'3F9645A2", '_lbl_8C0172F4']]);
INLINE_ASM(_bhSysCallInit, 0x14, "asm/nonmatching/./system/_bhSysCallInit.src");

// MERGE_LIST([['_sys', '_lbl_8C017308'], ["h'00300002", '_lbl_8C01730C']]);
INLINE_ASM(_bhSysCallDiscChange, 0x48, "asm/nonmatching/./system/_bhSysCallDiscChange.src");

// MERGE_LIST([['_njSetPaletteMode', '_lbl_8C017320'], ["h'0002A71C", '_lbl_8C017324'], ['_sys', '_lbl_8C017308'], ["h'0002A720", '_lbl_8C017328'], ['_njFogDisable', '_lbl_8C017310'], ['_njSetBackColor', '_lbl_8C017314'], ['_Adv_ChangeDiscScreen', '_lbl_8C017318'], ['_njWaitVSync', '_lbl_8C01731C']]);
INLINE_ASM(_bhSysCallSoundMuseum, 0x2c, "asm/nonmatching/./system/_bhSysCallSoundMuseum.src");

// MERGE_LIST([['_sys', '_lbl_8C017308'], ['_Adv_SoundMuseum', '_lbl_8C01732C'], ['_njFogDisable', '_lbl_8C017310'], ["h'00300008", '_lbl_8C017330'], ['_njSetBackColor', '_lbl_8C017314']]);
INLINE_ASM(_bhSysCallWarning, 0x2c, "asm/nonmatching/./system/_bhSysCallWarning.src");

// MERGE_LIST([['_sys', '_lbl_8C017308'], ['_njFogDisable', '_lbl_8C017310'], ['_njSetBackColor', '_lbl_8C017314'], ['_Adv_FirstWarningMessage', '_lbl_8C017334'], ["h'00300004", '_lbl_8C017338']]);
INLINE_ASM(_bhSysCallIpl, 0x2c, "asm/nonmatching/./system/_bhSysCallIpl.src");

// MERGE_LIST([['_sys', '_lbl_8C017308'], ['_njFogDisable', '_lbl_8C017310'], ["h'00300008", '_lbl_8C017330'], ['_njSetBackColor', '_lbl_8C017314'], ['_Adv_CapcomLogo', '_lbl_8C01733C']]);
INLINE_ASM(_bhSysCallFirstmovie, 0x122, "asm/nonmatching/./system/_bhSysCallFirstmovie.src");

// MERGE_LIST([["h'0200FDFF", 65023], ["h'80400200", 512], ["h'00308040", '_lbl_8C0173D0'], ["h'00310000", '_lbl_8C0173D4'], ["h'00380000", '_lbl_8C0173D8'], ["h'00300010", '_lbl_8C0173DC']]);
INLINE_ASM(_bhSysCallTitle, 0x44, "asm/nonmatching/./system/_bhSysCallTitle.src");

INLINE_ASM(_bhSysCallOpening, 0x234, "asm/nonmatching/./system/_bhSysCallOpening.src");

// MERGE_LIST([["h'00A00140", 320], ["h'089400A0", 160], ["h'08700894", 2196], ["h'08900870", 2160], ["h'008C0890", 2192], ["h'0085008C", 140], ["h'10000085", 133], ["h'40000000", '_lbl_8C0176A0']]);
INLINE_ASM(_bhSysCallPad, 0x94, "asm/nonmatching/./system/_bhSysCallPad.src");

INLINE_ASM(_bhSysCallGame, 0x84, "asm/nonmatching/./system/_bhSysCallGame.src");

// MERGE_LIST([["h'0001B05C", '_lbl_8C0177E0'], ["h'0001B150", '_lbl_8C017800'], ["h'1C040008", '_lbl_8C0177E4'], ["h'80000000", '_lbl_8C0177E8'], ["h'20000000", '_lbl_8C0177FC'], ["h'00010000", '_lbl_8C0177EC'], ["h'0001B0B8", '_lbl_8C0177F0'], ['_sys', '_lbl_8C0177D4'], ["h'10000000", '_lbl_8C0177F4'], ['_bhMainSequence', '_lbl_8C0177F8'], ["h'0001B15C", '_lbl_8C0177D8'], ['_syTmrGetCount', '_lbl_8C0177DC']]);
INLINE_ASM(_bhCheckSubTask, 0x280, "asm/nonmatching/./system/_bhCheckSubTask.src");

INLINE_ASM(_bhSysCallEvent, 0x2a0, "asm/nonmatching/./system/_bhSysCallEvent.src");

INLINE_ASM(_bhSysCallMap, 0x268, "asm/nonmatching/./system/_bhSysCallMap.src");

// MERGE_LIST([['_lbl_8C119DCA', '_lbl_8C017F00'], ["h'0002A6A8", '_lbl_8C017F04'], ['_lbl_8C11A038', '_lbl_8C017F08'], ['_bhControlScreenFade', '_lbl_8C017F0C'], ["h'0002A5C4", '_lbl_8C017F10'], ['_bhDrawScreenFade', '_lbl_8C017F14'], ['_lbl_8C119E0C', '_lbl_8C017F18'], ['_njFogEnable', '_lbl_8C017F1C'], ['_lbl_8C1141C6', '_lbl_8C017F20'], ['_njFogDisable', '_lbl_8C017EF8'], ["h'0002A5F0", '_lbl_8C017EFC'], ["h'02000400", 1024], ["h'FDFF0200", 512], ["h'A428FDFF", 65023]]);
INLINE_ASM(_bhSysCallItemselect, 0xbc, "asm/nonmatching/./system/_bhSysCallItemselect.src");

// MERGE_LIST([['_lbl_8C0B88EA', '_lbl_8C018020'], ['_njFogEnable', '_lbl_8C018040'], ["h'40400000", '_lbl_8C018024'], ["h'0002A5F0", '_lbl_8C018028'], ['_bhSetScreenFade', '_lbl_8C01802C'], ['_bhDrawScreenFade', '_lbl_8C018030'], ["h'0001B14C", '_lbl_8C018034'], ["h'00008000", '_lbl_8C018038'], ['_njPrintSize', '_lbl_8C01803C']]);
INLINE_ASM(_bhSysCallDoordemo, 0x254, "asm/nonmatching/./system/_bhSysCallDoordemo.src");

// MERGE_LIST([["h'01B00800", 2048]]);
INLINE_ASM(_bhSysCallMovie, 0x2e8, "asm/nonmatching/./system/_bhSysCallMovie.src");

// MERGE_LIST([['_njFogEnable', '_lbl_8C018500'], ["h'0002A714", '_lbl_8C018504'], ["h'0002A710", '_lbl_8C018508'], ["h'00008000", '_lbl_8C0184FC'], ["h'A70E01B0", 432], ["h'0002A70E", '_lbl_8C0184E4'], ['_bhCopyMainmem2Texmem', '_lbl_8C0184E8'], ["h'0002A718", '_lbl_8C0184EC'], ["h'0001B17C", '_lbl_8C0184F0'], ["h'0002A70C", '_lbl_8C0184F4'], ["h'0001B14C", '_lbl_8C0184F8']]);
INLINE_ASM(_bhSysCallEnding, 0x6, "asm/nonmatching/./system/_bhSysCallEnding.src");

// MERGE_LIST([['_lbl_8C11F894', '_lbl_8C01850C']]);
INLINE_ASM(_bhSysCallGameover, 0x6, "asm/nonmatching/./system/_bhSysCallGameover.src");

// MERGE_LIST([['_lbl_8C11E680', '_lbl_8C018510']]);
INLINE_ASM(_bhSysCallTypewriter, 0x58, "asm/nonmatching/./system/_bhSysCallTypewriter.src");

INLINE_ASM(_bhSysCallOption, 0xe2, "asm/nonmatching/./system/_bhSysCallOption.src");

// MERGE_LIST([["h'FE7F0180", 384], ["h'11F4FE7F", 65151], ['_sys', '_lbl_8C01860C'], ["h'0002A6F4", '_lbl_8C018610'], ['_njFogDisable', '_lbl_8C018614'], ['_Adv_GameOptionScreen', '_lbl_8C018618'], ["h'EFFFFFFF", '_lbl_8C01861C'], ["h'00010000", '_lbl_8C018620'], ["h'0001B14C", '_lbl_8C018624'], ["h'00008000", '_lbl_8C018628'], ['_njFogEnable', '_lbl_8C01862C'], ["h'40400000", '_lbl_8C018630'], ["h'0002A5F0", '_lbl_8C018634'], ['_bhSetScreenFade', '_lbl_8C018638'], ['_lbl_8C01BE22', '_lbl_8C01863C'], ['_lbl_8C327B14', '_lbl_8C018640'], ["h'00100000", '_lbl_8C018644'], ['_lbl_8C107DE4', '_lbl_8C018648'], ["h'00300008", '_lbl_8C01864C']]);
INLINE_ASM(_bhSysCallCompEvent, 0x52, "asm/nonmatching/./system/_bhSysCallCompEvent.src");

INLINE_ASM(_bhSysCallMonitor, 0x17c6, "asm/nonmatching/./system/_bhSysCallMonitor.src");

// MERGE_LIST([['_sys', '_lbl_8C019E30'], ["h'0001B0F8", '_lbl_8C019E38'], ["h'0001B100", '_lbl_8C019E3C'], ["h'0001B0FC", '_lbl_8C019E40'], ['_bhControlEffect', '_lbl_8C019E44']]);
INLINE_ASM(_func_8C019E1A, 0x1f2, "asm/nonmatching/./system/_func_8C019E1A.src");

// MERGE_LIST([["h'03E40084", 132], ["h'000003E4", 996], ["h'0001B120", '_lbl_8C01A040'], ['_lbl_8C104D34', '_lbl_8C01A044'], ["h'0001B124", '_lbl_8C01A048'], ['_plp', '_lbl_8C01A04C'], ['_lbl_8C136C2C', '_lbl_8C01A050'], ['_lbl_8C104CDC', '_lbl_8C01A054'], ['_lbl_8C10746C', '_lbl_8C01A058'], ["h'6233D014", 53268]]);
INLINE_ASM(_bhSysCallScreenSaver, 0x2a6, "asm/nonmatching/./system/_bhSysCallScreenSaver.src");

// MERGE_LIST([["h'0200008C", 140], ["h'08A00200", 512], ["h'100008A0", 2208], ["h'0001B164", '_lbl_8C01A36C'], ['_bhDispTime', '_lbl_8C01A370'], ["h'80000000", '_lbl_8C01A374']]);
INLINE_ASM(_bhReturnTitle, 0x62, "asm/nonmatching/./system/_bhReturnTitle.src");

// MERGE_LIST([["h'00200000", '_lbl_8C01A380'], ["h'00300008", '_lbl_8C01A384'], ["h'FFDFFFFF", '_lbl_8C01A388'], ["h'01001000", 4096], ["h'00300004", '_lbl_8C01A38C'], ["h'FFFDFFFF", '_lbl_8C01A390'], ['_sys', '_lbl_8C01A378'], ["h'00020000", '_lbl_8C01A37C']]);
INLINE_ASM(_bhExitGame, 0x9c, "asm/nonmatching/./system/_bhExitGame.src");

INLINE_ASM(_func_8C01A3B0, 0xb4, "asm/nonmatching/./system/_func_8C01A3B0.src");

