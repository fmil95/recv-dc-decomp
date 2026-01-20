#define NULL 0

void bhControlEOR();
void bhControlVSync();

void bhInitVSync()
{
    njSetVSyncFunction(bhControlVSync);
    njSetEORFunction(bhControlEOR);
}

MERGE_LIST([['_bhControlVSync', '_lbl_8C1311A8'], ['_njSetEORFunction', '_lbl_8C1311B4'], ['_njSetVSyncFunction', '_lbl_8C1311AC'], ['_bhControlEOR', '_lbl_8C1311B0']]);

void bhClearVSync()
{
    njSetVSyncFunction(NULL);
    njSetEORFunction(NULL);
}

MERGE_LIST([['_njSetEORFunction', '_lbl_8C1311B4'], ['_njSetVSyncFunction', '_lbl_8C1311AC']]);
INLINE_ASM(_func_8C13110A, 0x62, "asm/nonmatching/./sync/_func_8C13110A.src");

// MERGE_LIST([['_lbl_8C1020B6', '_lbl_8C1311C0'], ["h'00040000", '_lbl_8C1311C4'], ['_njExitTexture', '_lbl_8C1311C8'], ['_njExitPrint', '_lbl_8C1311CC'], ['_sbExitSystem', '_lbl_8C1311D0'], ['_syBtExit', '_lbl_8C1311D4'], ['_sys', '_lbl_8C1311B8'], ["h'00010000", '_lbl_8C1311BC']]);
INLINE_ASM(_bhControlVSync, 0x1be, "asm/nonmatching/./sync/_bhControlVSync.src");

// MERGE_LIST([["h'0001B160", '_lbl_8C13140C']]);
INLINE_ASM(_bhControlEOR, 0x2d0, "asm/nonmatching/./sync/_bhControlEOR.src");

// MERGE_LIST([["h'00C402A8", 680], ["h'00E000C4", 196], ["h'00E800E0", 224], ["h'01B800E8", 232], ["h'000001B8", 440], ["h'0001B148", '_lbl_8C13163C'], ["h'00FFFFFF", '_lbl_8C131640'], ["h'0002A5AC", '_lbl_8C131644'], ['_njGenerateFogTable3', '_lbl_8C131648'], ['_lbl_8C19A5D0', '_lbl_8C13164C'], ['_njFogEnable', '_lbl_8C131650'], ['_njFogDisable', '_lbl_8C131654']]);
INLINE_ASM(_func_8C1315FA, 0x6e, "asm/nonmatching/./sync/_func_8C1315FA.src");

INLINE_ASM(_bhCheckSoftReset, 0x36, "asm/nonmatching/./sync/_bhCheckSoftReset.src");

// MERGE_LIST([["h'00020000", '_lbl_8C1316A0'], ['_sys', '_lbl_8C1316A4'], ["h'00400000", '_lbl_8C1316A8'], ['_SoftResetFlag', '_lbl_8C1316AC'], ['_njUserExit', '_lbl_8C1316B0']]);
INLINE_ASM(_func_8C13169E, 0x5a, "asm/nonmatching/./sync/_func_8C13169E.src");

// MERGE_LIST([["h'0002AB4F", '_lbl_8C1317C0'], ["h'0140008C", 140], ['_plp', '_lbl_8C1317C4'], ["h'041C0140", 320], ["h'00A0041C", 1052], ["h'02000000", '_lbl_8C1317B0'], ["h'00008000", '_lbl_8C1317B4'], ['_sys', '_lbl_8C1317B8'], ["h'0001B068", '_lbl_8C1317BC']]);
