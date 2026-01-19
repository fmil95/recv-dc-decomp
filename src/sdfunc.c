#include "structs.h"

extern SYS_WORK* sys;

void bhReleaseFreeMemory(void* mp)
{ 
    sys->memp = mp; 
}

MERGE_LIST([["h'0001B17C", '_lbl_8C1044C0'], ['_sys', '_lbl_8C1044BC']]);
INLINE_ASM(_ExitApplication, 0x6, "asm/nonmatching/./sdfunc/_ExitApplication.src");

// MERGE_LIST([['_njUserExit', '_lbl_8C1044C4']]);
INLINE_ASM(_QuickGetDiscTrayStatus, 0x1e, "asm/nonmatching/./sdfunc/_QuickGetDiscTrayStatus.src");

// MERGE_LIST([['_lbl_8C325A0C', '_lbl_8C1044C8'], ['_njWaitVSync', '_lbl_8C1044CC'], ['_lbl_8C1682B0', '_lbl_8C1044D0']]);
INLINE_ASM(_func_8C1043E6, 0x6, "asm/nonmatching/./sdfunc/_func_8C1043E6.src");

// MERGE_LIST([['_lbl_8C1730B0', '_lbl_8C1044D4']]);
INLINE_ASM(_GetBootDiscId, 0x40, "asm/nonmatching/./sdfunc/_GetBootDiscId.src");

// MERGE_LIST([['_syMalloc', '_lbl_8C1044E0'], ['_lbl_8C13B684', '_lbl_8C1044E4'], ['_ReadFileEx', '_lbl_8C1044E8'], ['_syFree', '_lbl_8C1044EC'], ['_BootDiscSystemId', '_lbl_8C1044D8'], ['_syBtGetBootSystemID', '_lbl_8C1044DC'], ["h'00004000", 16384]]);
INLINE_ASM(_InitSofdecSystem, 0x7a, "asm/nonmatching/./sdfunc/_InitSofdecSystem.src");

// MERGE_LIST([['_memset', '_lbl_8C1044F0'], ['_lbl_8C10345C', '_lbl_8C1044F8'], ['_hws', '_lbl_8C1044F4'], ['_lbl_8C103488', '_lbl_8C1044FC']]);
INLINE_ASM(_func_8C1044A6, 0x62, "asm/nonmatching/./sdfunc/_func_8C1044A6.src");

INLINE_ASM(_InitSoundProgram, 0x160, "asm/nonmatching/./sdfunc/_InitSoundProgram.src");

INLINE_ASM(_ExitSoundProgram, 0x5a, "asm/nonmatching/./sdfunc/_ExitSoundProgram.src");

// MERGE_LIST([['_lbl_8C10228C', '_lbl_8C104740'], ['_lbl_8C179DF2', '_lbl_8C104744'], ['_lbl_8C326288', '_lbl_8C104748'], ['_lbl_8C1684EC', '_lbl_8C10472C'], ['_syFree', '_lbl_8C10474C'], ['_lbl_8C107C6A', '_lbl_8C104730'], ['_lbl_8C128DBA', '_lbl_8C104734'], ['_lbl_8C103D50', '_lbl_8C104738'], ['_lbl_8C1038C4', '_lbl_8C10473C']]);
INLINE_ASM(_func_8C1046C2, 0x118, "asm/nonmatching/./sdfunc/_func_8C1046C2.src");

// MERGE_LIST([['_lbl_8C1683D4', '_lbl_8C104900'], ['_sys', '_lbl_8C104904'], ['_lbl_8C10399C', '_lbl_8C1048FC']]);
INLINE_ASM(_func_8C1047DA, 0x2c, "asm/nonmatching/./sdfunc/_func_8C1047DA.src");

// MERGE_LIST([['_lbl_8C1683D4', '_lbl_8C104900'], ['_lbl_8C1683E4', '_lbl_8C104908'], ['_lbl_8C1039F8', '_lbl_8C10490C'], ['_lbl_8C32628C', '_lbl_8C104910'], ['_syFree', '_lbl_8C104914']]);
INLINE_ASM(_ExecSoundSynchProgram, 0x76, "asm/nonmatching/./sdfunc/_ExecSoundSynchProgram.src");

// MERGE_LIST([['_lbl_8C1684F4', '_lbl_8C104920'], ['_lbl_8C1076F2', '_lbl_8C104940'], ['_lbl_8C168504', '_lbl_8C104938'], ['_sys', '_lbl_8C104904'], ['_lbl_8C107C3C', '_lbl_8C104944'], ['_lbl_8C3279CC', '_lbl_8C104924'], ['_lbl_8C102FD4', '_lbl_8C104928'], ['_lbl_8C103194', '_lbl_8C10492C'], ["h'04000000", '_lbl_8C104930'], ['_lbl_8C1042BA', '_lbl_8C104934'], ['_lbl_8C107E0E', '_lbl_8C10493C'], ['_lbl_8C1684EC', '_lbl_8C104918'], ['_lbl_8C1750C0', '_lbl_8C10491C']]);
INLINE_ASM(_func_8C10487C, 0x108, "asm/nonmatching/./sdfunc/_func_8C10487C.src");

INLINE_ASM(_func_8C104984, 0x2e, "asm/nonmatching/./sdfunc/_func_8C104984.src");

// MERGE_LIST([["h'00000400", 1024], ['_lbl_8C326290', '_lbl_8C104A64'], ["h'0000FFFF", '_lbl_8C104A68']]);
INLINE_ASM(_func_8C1049B2, 0x2e, "asm/nonmatching/./sdfunc/_func_8C1049B2.src");

// MERGE_LIST([['_lbl_8C105E8C', '_lbl_8C104A70'], ['_lbl_8C102510', '_lbl_8C104A6C']]);
INLINE_ASM(_func_8C1049E0, 0x4c, "asm/nonmatching/./sdfunc/_func_8C1049E0.src");

// MERGE_LIST([['_lbl_8C1684B8', '_lbl_8C104A78'], ['_lbl_8C3262E8', '_lbl_8C104A74']]);
INLINE_ASM(_func_8C104A2C, 0x184, "asm/nonmatching/./sdfunc/_func_8C104A2C.src");

// MERGE_LIST([['_RequestReadInsideFile', '_lbl_8C104C60'], ['_lbl_8C102228', '_lbl_8C104C78'], ['_lbl_8C326294', '_lbl_8C104C44'], ['_GetReadFileStatus', '_lbl_8C104C64'], ["h'0000FFFF", '_lbl_8C104C48'], ['_lbl_8C168484', '_lbl_8C104C68'], ['_lbl_8C101E64', '_lbl_8C104C4C'], ['_lbl_8C1022D8', '_lbl_8C104C6C'], ['_RequestReadIsoFile', '_lbl_8C104C5C'], ['_lbl_8C1683DC', '_lbl_8C104C50'], ['_lbl_8C3262CB', '_lbl_8C104C70'], ['_lbl_8C106802', '_lbl_8C104C7C'], ['_GetInsideFileSize', '_lbl_8C104C54'], ['_memcpy', '_lbl_8C104C74'], ['_bhGetFreeMemory', '_lbl_8C104C58']]);
INLINE_ASM(_func_8C104BB0, 0x70, "asm/nonmatching/./sdfunc/_func_8C104BB0.src");

// MERGE_LIST([['_lbl_8C1684F8', '_lbl_8C104C80'], ['_lbl_8C1684F0', '_lbl_8C104C84'], ['_lbl_8C3279B8', '_lbl_8C104C88'], ['_lbl_8C168484', '_lbl_8C104C68'], ['_lbl_8C3279C8', '_lbl_8C104C8C'], ['_lbl_8C1022D8', '_lbl_8C104C6C'], ['_lbl_8C102228', '_lbl_8C104C78']]);
INLINE_ASM(_func_8C104C20, 0x1e, "asm/nonmatching/./sdfunc/_func_8C104C20.src");

// MERGE_LIST([['_lbl_8C1684F8', '_lbl_8C104C80'], ['_lbl_8C1684F0', '_lbl_8C104C84'], ['_lbl_8C3279C8', '_lbl_8C104C8C'], ['_lbl_8C3279B8', '_lbl_8C104C88']]);
INLINE_ASM(_func_8C104C3E, 0x52, "asm/nonmatching/./sdfunc/_func_8C104C3E.src");

INLINE_ASM(_func_8C104C90, 0x4c, "asm/nonmatching/./sdfunc/_func_8C104C90.src");

// MERGE_LIST([["h'400003E8", 1000], ['_lbl_8C13B6B8', '_lbl_8C104DCC'], ['_lbl_8C3279CC', '_lbl_8C104DD0'], ['_sprintf', '_lbl_8C104DD4'], ['_lbl_8C326294', '_lbl_8C104DD8'], ['_lbl_8C1684F4', '_lbl_8C104DDC']]);
INLINE_ASM(_func_8C104CDC, 0x2c, "asm/nonmatching/./sdfunc/_func_8C104CDC.src");

// MERGE_LIST([['_lbl_8C13B6CC', '_lbl_8C104DE0'], ["h'B6B84000", 16384], ['_lbl_8C3279CC', '_lbl_8C104DD0'], ['_sprintf', '_lbl_8C104DD4'], ['_lbl_8C326294', '_lbl_8C104DD8'], ['_lbl_8C1684F4', '_lbl_8C104DDC']]);
INLINE_ASM(_func_8C104D08, 0x2c, "asm/nonmatching/./sdfunc/_func_8C104D08.src");

// MERGE_LIST([['_lbl_8C13B6DC', '_lbl_8C104DE4'], ["h'00008000", '_lbl_8C104DE8'], ['_lbl_8C3262CA', '_lbl_8C104DEC'], ['_lbl_8C3279CC', '_lbl_8C104DD0'], ['_sprintf', '_lbl_8C104DD4'], ['_lbl_8C326294', '_lbl_8C104DD8'], ['_lbl_8C1684F4', '_lbl_8C104DDC']]);
INLINE_ASM(_func_8C104D34, 0x2c, "asm/nonmatching/./sdfunc/_func_8C104D34.src");

// MERGE_LIST([['_lbl_8C3279CC', '_lbl_8C104DD0'], ['_lbl_8C13B6EC', '_lbl_8C104DF0'], ['_sprintf', '_lbl_8C104DD4'], ["h'0000FFF0", '_lbl_8C104DF4'], ['_lbl_8C326294', '_lbl_8C104DD8'], ['_lbl_8C1684F4', '_lbl_8C104DDC']]);
INLINE_ASM(_func_8C104D60, 0x4e, "asm/nonmatching/./sdfunc/_func_8C104D60.src");

// MERGE_LIST([['_lbl_8C13B6FC', '_lbl_8C104DF8'], ["h'400003E8", 1000], ['_lbl_8C3279CC', '_lbl_8C104DD0'], ['_sprintf', '_lbl_8C104DD4'], ['_lbl_8C326294', '_lbl_8C104DD8'], ['_lbl_8C1684F4', '_lbl_8C104DDC'], ["h'0000C000", '_lbl_8C104DFC']]);
INLINE_ASM(_func_8C104DAE, 0x4, "asm/nonmatching/./sdfunc/_func_8C104DAE.src");

INLINE_ASM(_func_8C104DB2, 0x6, "asm/nonmatching/./sdfunc/_func_8C104DB2.src");

// MERGE_LIST([['_lbl_8C1684F4', '_lbl_8C104DDC']]);
INLINE_ASM(_func_8C104DB8, 0x6, "asm/nonmatching/./sdfunc/_func_8C104DB8.src");

// MERGE_LIST([['_lbl_8C1684C0', '_lbl_8C104E00']]);
INLINE_ASM(_func_8C104DBE, 0x46, "asm/nonmatching/./sdfunc/_func_8C104DBE.src");

INLINE_ASM(_func_8C104E04, 0x2a, "asm/nonmatching/./sdfunc/_func_8C104E04.src");

// MERGE_LIST([['_lbl_8C327984', '_lbl_8C104F30'], ['_lbl_8C327988', '_lbl_8C104F2C']]);
INLINE_ASM(_ResetRoomSoundEnvParam, 0xa, "asm/nonmatching/./sdfunc/_ResetRoomSoundEnvParam.src");

// MERGE_LIST([['_memset', '_lbl_8C104F38'], ['_lbl_8C3262CB', '_lbl_8C104F34']]);
INLINE_ASM(_func_8C104E38, 0x3c, "asm/nonmatching/./sdfunc/_func_8C104E38.src");

// MERGE_LIST([["h'47800000", '_lbl_8C104F40'], ['_lbl_8C132ED8', '_lbl_8C104F3C'], ["h'40C90FD8", '_lbl_8C104F44']]);
INLINE_ASM(_func_8C104E74, 0x60, "asm/nonmatching/./sdfunc/_func_8C104E74.src");

// MERGE_LIST([["h'01FE0100", 256], ['_rom', '_lbl_8C104F48'], ['_cam', '_lbl_8C104F4C'], ["h'3DCCCCCD", '_lbl_8C104F50'], ['_lbl_8C02D260', '_lbl_8C104F54']]);
INLINE_ASM(_Get3DSoundParameter, 0x106, "asm/nonmatching/./sdfunc/_Get3DSoundParameter.src");

// MERGE_LIST([["h'43B40000", '_lbl_8C1051C0'], ['_lbl_8C132960', '_lbl_8C1051E0'], ["h'47800000", '_lbl_8C1051C4'], ['_lbl_8C16874A', '_lbl_8C1051D8'], ['_lbl_8C327A10', '_lbl_8C1051C8'], ["h'40A00000", '_lbl_8C1051CC'], ['_lbl_8C168706', '_lbl_8C1051D0'], ['_lbl_8C168508', '_lbl_8C1051D4'], ['_lbl_8C241010', '_lbl_8C1051BC'], ['_lbl_8C3262C9', '_lbl_8C1051DC']]);
INLINE_ASM(_func_8C104FDA, 0x92, "asm/nonmatching/./sdfunc/_func_8C104FDA.src");

// MERGE_LIST([['_lbl_8C3262B0', '_lbl_8C1051E8'], ['_lbl_8C326298', '_lbl_8C1051E4']]);
INLINE_ASM(_func_8C10506C, 0x2be, "asm/nonmatching/./sdfunc/_func_8C10506C.src");

// MERGE_LIST([['_lbl_8C3279B4', '_lbl_8C105460'], ['_lbl_8C1684DE', '_lbl_8C105440'], ['_lbl_8C3262DC', '_lbl_8C105464'], ['_lbl_8C1684C4', '_lbl_8C105444'], ['_lbl_8C103F64', '_lbl_8C105468'], ['_lbl_8C102864', '_lbl_8C105448'], ['_lbl_8C1684D4', '_lbl_8C10544C'], ['_lbl_8C102780', '_lbl_8C105450'], ['_lbl_8C327588', '_lbl_8C105454'], ['_lbl_8C106BE4', '_lbl_8C105458'], ['_lbl_8C1684CA', '_lbl_8C10545C']]);
INLINE_ASM(_func_8C10532A, 0xb2, "asm/nonmatching/./sdfunc/_func_8C10532A.src");

// MERGE_LIST([['_lbl_8C327988', '_lbl_8C105470'], ['_lbl_8C327984', '_lbl_8C10546C']]);
INLINE_ASM(_func_8C1053DC, 0x1fe, "asm/nonmatching/./sdfunc/_func_8C1053DC.src");

// MERGE_LIST([['_lbl_8C1684DE', '_lbl_8C1056E4'], ['_lbl_8C1684C4', '_lbl_8C1056E8'], ['_lbl_8C102E18', '_lbl_8C1056EC'], ['_lbl_8C3279B4', '_lbl_8C1056F8'], ['_lbl_8C1684D4', '_lbl_8C1056F0'], ['_lbl_8C32756C', '_lbl_8C1056F4'], ['_lbl_8C10419E', '_lbl_8C1056FC']]);
INLINE_ASM(_func_8C1055DA, 0x180, "asm/nonmatching/./sdfunc/_func_8C1055DA.src");

// MERGE_LIST([['_lbl_8C3279AC', '_lbl_8C105760'], ['_lbl_8C1030D6', '_lbl_8C105764'], ['_lbl_8C32756C', '_lbl_8C105768'], ['_lbl_8C1684D4', '_lbl_8C10575C']]);
INLINE_ASM(_func_8C10575A, 0x268, "asm/nonmatching/./sdfunc/_func_8C10575A.src");

// MERGE_LIST([['_lbl_8C102A70', '_lbl_8C105A40'], ['_lbl_8C326298', '_lbl_8C105A2C'], ['_lbl_8C32799F', '_lbl_8C105A50'], ['_lbl_8C3262BC', '_lbl_8C105A54'], ['_lbl_8C3262CB', '_lbl_8C105A58']]);
INLINE_ASM(_func_8C1059C2, 0x60, "asm/nonmatching/./sdfunc/_func_8C1059C2.src");

// MERGE_LIST([['__quick_evn_mvn', '_lbl_8C105A28'], ['_lbl_8C168498', '_lbl_8C105A60'], ['_lbl_8C13B718', '_lbl_8C105A5C']]);
INLINE_ASM(_func_8C105A22, 0x1f8, "asm/nonmatching/./sdfunc/_func_8C105A22.src");

// MERGE_LIST([['_lbl_8C3262B0', '_lbl_8C105C60'], ["h'4F000000", '_lbl_8C105C80'], ['_lbl_8C327A1C', '_lbl_8C105C64'], ['_lbl_8C3262CC', '_lbl_8C105C84'], ["h'40800000", '_lbl_8C105C78'], ['_lbl_8C327998', '_lbl_8C105C48'], ['_lbl_8C327A18', '_lbl_8C105C68'], ['_lbl_8C102A70', '_lbl_8C105C88'], ['_lbl_8C326298', '_lbl_8C105C4C'], ['_lbl_8C327A10', '_lbl_8C105C6C'], ['_lbl_8C13B730', '_lbl_8C105C50'], ['_lbl_8C327A14', '_lbl_8C105C70'], ['_lbl_8C1330F0', '_lbl_8C105C7C'], ['_lbl_8C132DF0', '_lbl_8C105C54'], ["h'47000000", '_lbl_8C105C74'], ['_lbl_8C13B738', '_lbl_8C105C58'], ['_lbl_8C13B740', '_lbl_8C105C5C']]);
INLINE_ASM(_CallPlayerFootStepSe, 0x12, "asm/nonmatching/./sdfunc/_CallPlayerFootStepSe.src");

// MERGE_LIST([['_lbl_8C3262BC', '_lbl_8C105C8C']]);
INLINE_ASM(_func_8C105C2C, 0x1a, "asm/nonmatching/./sdfunc/_func_8C105C2C.src");

// MERGE_LIST([['_lbl_8C3262BC', '_lbl_8C105C8C']]);
INLINE_ASM(_func_8C105C46, 0xce, "asm/nonmatching/./sdfunc/_func_8C105C46.src");

// MERGE_LIST([['_lbl_8C326298', '_lbl_8C105DA0'], ["h'00000100", 256], ['_lbl_8C3262CD', '_lbl_8C105DA4'], ['_lbl_8C13B748', '_lbl_8C105D88'], ['_lbl_8C102A70', '_lbl_8C105DA8'], ['__quick_evn_mvn', '_lbl_8C105D8C'], ['_lbl_8C1684F4', '_lbl_8C105D90'], ["h'FFFF00FF", '_lbl_8C105D94'], ['_lbl_8C1684A8', '_lbl_8C105D98'], ['_lbl_8C327998', '_lbl_8C105D9C']]);
INLINE_ASM(_func_8C105D14, 0x4, "asm/nonmatching/./sdfunc/_func_8C105D14.src");

// MERGE_LIST([['_lbl_8C326298', '_lbl_8C105DA0'], ["h'00000100", 256], ['_lbl_8C3262CD', '_lbl_8C105DA4'], ['_lbl_8C13B748', '_lbl_8C105D88'], ['_lbl_8C102A70', '_lbl_8C105DA8'], ['__quick_evn_mvn', '_lbl_8C105D8C'], ['_lbl_8C1684F4', '_lbl_8C105D90'], ["h'FFFF00FF", '_lbl_8C105D94'], ['_lbl_8C1684A8', '_lbl_8C105D98'], ['_lbl_8C327998', '_lbl_8C105D9C']]);
INLINE_ASM(_func_8C105D18, 0xa4, "asm/nonmatching/./sdfunc/_func_8C105D18.src");

INLINE_ASM(_func_8C105DBC, 0xac, "asm/nonmatching/./sdfunc/_func_8C105DBC.src");

// MERGE_LIST([['_lbl_8C3262F0', '_lbl_8C105F00'], ['_lbl_8C326298', '_lbl_8C105F04'], ['_lbl_8C102D96', '_lbl_8C105F08'], ['_lbl_8C10255E', '_lbl_8C105F0C'], ["h'B7500300", 768], ['_lbl_8C13B750', '_lbl_8C105EF0'], ['_lbl_8C1684B8', '_lbl_8C105F10'], ['__quick_odd_mvn', '_lbl_8C105EF4'], ["h'FFFF00FF", '_lbl_8C105EF8'], ['_lbl_8C32798C', '_lbl_8C105EFC']]);
INLINE_ASM(_func_8C105E68, 0x4, "asm/nonmatching/./sdfunc/_func_8C105E68.src");

INLINE_ASM(_func_8C105E6C, 0x20, "asm/nonmatching/./sdfunc/_func_8C105E6C.src");

// MERGE_LIST([['_lbl_8C1684B8', '_lbl_8C105F10'], ['_lbl_8C3262E8', '_lbl_8C105F14']]);
INLINE_ASM(_func_8C105E8C, 0x4c, "asm/nonmatching/./sdfunc/_func_8C105E8C.src");

// MERGE_LIST([['_lbl_8C102D96', '_lbl_8C105F08'], ['_lbl_8C1684B8', '_lbl_8C105F10'], ['__quick_odd_mvn', '_lbl_8C105EF4'], ['_lbl_8C13B75C', '_lbl_8C105F18'], ['_lbl_8C102644', '_lbl_8C105F1C']]);
INLINE_ASM(_func_8C105ED8, 0x4, "asm/nonmatching/./sdfunc/_func_8C105ED8.src");

INLINE_ASM(_func_8C105EDC, 0x44, "asm/nonmatching/./sdfunc/_func_8C105EDC.src");

INLINE_ASM(_func_8C105F20, 0x4e, "asm/nonmatching/./sdfunc/_func_8C105F20.src");

// MERGE_LIST([['_lbl_8C13B768', '_lbl_8C106084'], ['_lbl_8C132DF0', '_lbl_8C106088'], ['_lbl_8C326298', '_lbl_8C10608C'], ['_lbl_8C3262CA', '_lbl_8C106090'], ['_lbl_8C10255E', '_lbl_8C106094']]);
INLINE_ASM(_func_8C105F6E, 0xac, "asm/nonmatching/./sdfunc/_func_8C105F6E.src");

// MERGE_LIST([['__quick_odd_mvn', '_lbl_8C1060A0'], ['_lbl_8C3262B0', '_lbl_8C1060A4'], ['_lbl_8C132DF0', '_lbl_8C106088'], ['_Get3DSoundParameter', '_lbl_8C1060A8'], ['_lbl_8C3262CF', '_lbl_8C1060AC'], ["h'00F00000", '_lbl_8C1060B0'], ["h'000F0000", '_lbl_8C1060B4'], ['_lbl_8C13B790', '_lbl_8C106098'], ['_lbl_8C326348', '_lbl_8C10609C'], ["h'0F000000", '_lbl_8C1060B8']]);
INLINE_ASM(_func_8C10601A, 0x12, "asm/nonmatching/./sdfunc/_func_8C10601A.src");

INLINE_ASM(_func_8C10602C, 0x10, "asm/nonmatching/./sdfunc/_func_8C10602C.src");

INLINE_ASM(_func_8C10603C, 0x16, "asm/nonmatching/./sdfunc/_func_8C10603C.src");

INLINE_ASM(_func_8C106052, 0x30, "asm/nonmatching/./sdfunc/_func_8C106052.src");

// MERGE_LIST([['_lbl_8C326300', '_lbl_8C1060BC']]);
INLINE_ASM(_func_8C106082, 0x9a, "asm/nonmatching/./sdfunc/_func_8C106082.src");

// MERGE_LIST([["h'030000C8", 200], ['_lbl_8C1684DE', '_lbl_8C1061CC'], ['_lbl_8C102E88', '_lbl_8C1061D0'], ['_lbl_8C326300', '_lbl_8C1061D4'], ['_lbl_8C107C1C', '_lbl_8C1061D8']]);
INLINE_ASM(_func_8C10611C, 0x6e, "asm/nonmatching/./sdfunc/_func_8C10611C.src");

// MERGE_LIST([['__quick_evn_mvn', '_lbl_8C1061E0'], ["h'FFFF00FF", '_lbl_8C1061E4'], ['_lbl_8C102A70', '_lbl_8C1061FC'], ['_lbl_8C327998', '_lbl_8C1061E8'], ["h'00000300", 768], ['_lbl_8C104FDA', '_lbl_8C1061EC'], ['_lbl_8C3262AC', '_lbl_8C1061F0'], ['_lbl_8C3262CF', '_lbl_8C1061F4'], ['_lbl_8C326298', '_lbl_8C1061F8'], ['_lbl_8C13B798', '_lbl_8C1061DC']]);
INLINE_ASM(_func_8C10618A, 0xe, "asm/nonmatching/./sdfunc/_func_8C10618A.src");

// MERGE_LIST([['_lbl_8C102B42', '_lbl_8C106200'], ['_lbl_8C1684DE', '_lbl_8C1061CC']]);
INLINE_ASM(_func_8C106198, 0x4, "asm/nonmatching/./sdfunc/_func_8C106198.src");

INLINE_ASM(_func_8C10619C, 0x4, "asm/nonmatching/./sdfunc/_func_8C10619C.src");

INLINE_ASM(_func_8C1061A0, 0x10a, "asm/nonmatching/./sdfunc/_func_8C1061A0.src");

// MERGE_LIST([["h'00000200", 512], ["h'FFFF00FF", '_lbl_8C106344'], ['_lbl_8C326298', '_lbl_8C106348'], ['_lbl_8C3262B0', '_lbl_8C10634C'], ['_Get3DSoundParameter', '_lbl_8C106350'], ['_lbl_8C3279AC', '_lbl_8C106354'], ['_lbl_8C10255E', '_lbl_8C106358']]);
INLINE_ASM(_func_8C1062AA, 0x3e, "asm/nonmatching/./sdfunc/_func_8C1062AA.src");

// MERGE_LIST([['__quick_odd_mvn', '_lbl_8C106360'], ['_lbl_8C327988', '_lbl_8C106364'], ['_lbl_8C13B7C4', '_lbl_8C10635C'], ['_lbl_8C102644', '_lbl_8C106368']]);
INLINE_ASM(_func_8C1062E8, 0x8c, "asm/nonmatching/./sdfunc/_func_8C1062E8.src");

INLINE_ASM(_func_8C106374, 0x18, "asm/nonmatching/./sdfunc/_func_8C106374.src");

// MERGE_LIST([["h'FFFF00FF", '_lbl_8C106480'], ["h'00FF0200", 512]]);
INLINE_ASM(_func_8C10638C, 0x64, "asm/nonmatching/./sdfunc/_func_8C10638C.src");

// MERGE_LIST([["h'FFFF00FF", '_lbl_8C106480'], ['_lbl_8C32756C', '_lbl_8C106484'], ['_lbl_8C32796C', '_lbl_8C106488'], ['_lbl_8C327980', '_lbl_8C10648C'], ["h'00FF0200", 512]]);
INLINE_ASM(_func_8C1063F0, 0xa8, "asm/nonmatching/./sdfunc/_func_8C1063F0.src");

INLINE_ASM(_PlayBgmEx2, 0x78, "asm/nonmatching/./sdfunc/_PlayBgmEx2.src");

// MERGE_LIST([['_lbl_8C3279BC', '_lbl_8C106700'], ["h'C2FE0000", '_lbl_8C106704'], ['_lbl_8C103F72', '_lbl_8C106708'], ['_lbl_8C10419A', '_lbl_8C10670C'], ['_sys', '_lbl_8C1066F0'], ['_PlayAdx', '_lbl_8C106710'], ['_lbl_8C3262DC', '_lbl_8C106718'], ["h'04000000", '_lbl_8C1066F4'], ['_lbl_8C1684B4', '_lbl_8C106714'], ['_lbl_8C103F50', '_lbl_8C1066F8'], ['_lbl_8C103F02', '_lbl_8C1066FC']]);
INLINE_ASM(_func_8C106510, 0x16, "asm/nonmatching/./sdfunc/_func_8C106510.src");

// MERGE_LIST([['_lbl_8C1683D4', '_lbl_8C10671C']]);
INLINE_ASM(_func_8C106526, 0x4, "asm/nonmatching/./sdfunc/_func_8C106526.src");

INLINE_ASM(_func_8C10652A, 0x24, "asm/nonmatching/./sdfunc/_func_8C10652A.src");

// MERGE_LIST([['_lbl_8C3262E4', '_lbl_8C106720'], ['_lbl_8C3262DC', '_lbl_8C106718'], ['_lbl_8C1684B4', '_lbl_8C106714']]);
INLINE_ASM(_func_8C10654E, 0x3e, "asm/nonmatching/./sdfunc/_func_8C10654E.src");

// MERGE_LIST([['_lbl_8C3279BC', '_lbl_8C106700'], ['_lbl_8C3262E0', '_lbl_8C106724'], ['_lbl_8C10419A', '_lbl_8C10670C'], ['_lbl_8C1684B4', '_lbl_8C106714'], ['_lbl_8C3262DC', '_lbl_8C106718'], ['_lbl_8C103F02', '_lbl_8C1066FC']]);
INLINE_ASM(_func_8C10658C, 0x18, "asm/nonmatching/./sdfunc/_func_8C10658C.src");

// MERGE_LIST([['_lbl_8C3262E4', '_lbl_8C106720'], ['_lbl_8C3262DC', '_lbl_8C106718'], ['_lbl_8C1684B4', '_lbl_8C106714'], ['_lbl_8C3262E0', '_lbl_8C106724']]);
INLINE_ASM(_PlayVoiceEx2, 0xe0, "asm/nonmatching/./sdfunc/_PlayVoiceEx2.src");

// MERGE_LIST([['_lbl_8C103F02', '_lbl_8C1066FC'], ['_lbl_8C3279C0', '_lbl_8C106728'], ['_lbl_8C10401A', '_lbl_8C10672C'], ['_lbl_8C10419A', '_lbl_8C10670C'], ['_lbl_8C103F64', '_lbl_8C106730'], ['_Get3DSoundParameter', '_lbl_8C106738'], ['_lbl_8C3262B0', '_lbl_8C106734'], ['_lbl_8C103F50', '_lbl_8C1066F8'], ['_lbl_8C103EC6', '_lbl_8C10673C']]);
INLINE_ASM(_func_8C106684, 0x28, "asm/nonmatching/./sdfunc/_func_8C106684.src");

// MERGE_LIST([['_lbl_8C1683D8', '_lbl_8C106740']]);
INLINE_ASM(_func_8C1066AC, 0x10, "asm/nonmatching/./sdfunc/_func_8C1066AC.src");

INLINE_ASM(_func_8C1066BC, 0x6, "asm/nonmatching/./sdfunc/_func_8C1066BC.src");

// MERGE_LIST([['_lbl_8C103F3C', '_lbl_8C106744']]);
INLINE_ASM(_func_8C1066C2, 0x86, "asm/nonmatching/./sdfunc/_func_8C1066C2.src");

INLINE_ASM(_func_8C106748, 0xa, "asm/nonmatching/./sdfunc/_func_8C106748.src");

// MERGE_LIST([['_lbl_8C3279BC', '_lbl_8C1069D0']]);
INLINE_ASM(_func_8C106752, 0xa, "asm/nonmatching/./sdfunc/_func_8C106752.src");

// MERGE_LIST([['_lbl_8C104030', '_lbl_8C1069D4']]);
INLINE_ASM(_func_8C10675C, 0xa6, "asm/nonmatching/./sdfunc/_func_8C10675C.src");

// MERGE_LIST([['_lbl_8C102D34', '_lbl_8C1069D8'], ['_lbl_8C3262C8', '_lbl_8C1069E0'], ['_lbl_8C1028CC', '_lbl_8C1069DC'], ['_lbl_8C3262C9', '_lbl_8C1069E4']]);
INLINE_ASM(_func_8C106802, 0x8, "asm/nonmatching/./sdfunc/_func_8C106802.src");

// MERGE_LIST([['_lbl_8C3262D4', '_lbl_8C1069E8']]);
INLINE_ASM(_func_8C10680A, 0x2e, "asm/nonmatching/./sdfunc/_func_8C10680A.src");

// MERGE_LIST([['_lbl_8C326300', '_lbl_8C1069EC']]);
INLINE_ASM(_func_8C106838, 0x1e, "asm/nonmatching/./sdfunc/_func_8C106838.src");

// MERGE_LIST([['_lbl_8C326300', '_lbl_8C1069EC']]);
INLINE_ASM(_func_8C106856, 0x5a, "asm/nonmatching/./sdfunc/_func_8C106856.src");

// MERGE_LIST([['_lbl_8C326300', '_lbl_8C1069EC']]);
INLINE_ASM(_func_8C1068B0, 0xbe, "asm/nonmatching/./sdfunc/_func_8C1068B0.src");

// MERGE_LIST([['_lbl_8C102A70', '_lbl_8C106A00'], ['_lbl_8C102F46', '_lbl_8C106A04'], ['_lbl_8C326298', '_lbl_8C1069F0'], ['_lbl_8C102FB6', '_lbl_8C1069F4'], ['_lbl_8C102B42', '_lbl_8C1069F8'], ['_lbl_8C102FA4', '_lbl_8C1069FC']]);
INLINE_ASM(_func_8C10696E, 0x2e, "asm/nonmatching/./sdfunc/_func_8C10696E.src");

// MERGE_LIST([["h'0F000000", '_lbl_8C106A08'], ['_lbl_8C326300', '_lbl_8C1069EC'], ["h'000F0000", '_lbl_8C106A0C']]);
INLINE_ASM(_func_8C10699C, 0x4, "asm/nonmatching/./sdfunc/_func_8C10699C.src");

INLINE_ASM(_func_8C1069A0, 0x244, "asm/nonmatching/./sdfunc/_func_8C1069A0.src");

// MERGE_LIST([['_lbl_8C104E74', '_lbl_8C106D48']]);
INLINE_ASM(_func_8C106BE4, 0x36, "asm/nonmatching/./sdfunc/_func_8C106BE4.src");

// MERGE_LIST([['_lbl_8C327548', '_lbl_8C106D50'], ['_lbl_8C327984', '_lbl_8C106D4C']]);
INLINE_ASM(_func_8C106C1A, 0x4, "asm/nonmatching/./sdfunc/_func_8C106C1A.src");

INLINE_ASM(_func_8C106C1E, 0x22, "asm/nonmatching/./sdfunc/_func_8C106C1E.src");

// MERGE_LIST([['_lbl_8C327548', '_lbl_8C106D50'], ['_lbl_8C327984', '_lbl_8C106D4C']]);
INLINE_ASM(_func_8C106C40, 0x176, "asm/nonmatching/./sdfunc/_func_8C106C40.src");

// MERGE_LIST([['_lbl_8C10401A', '_lbl_8C106E84'], ['_lbl_8C103F64', '_lbl_8C106E88'], ['_lbl_8C1683D4', '_lbl_8C106E8C'], ['_PlayAdx', '_lbl_8C106E90']]);
INLINE_ASM(_func_8C106DB6, 0x1c, "asm/nonmatching/./sdfunc/_func_8C106DB6.src");

// MERGE_LIST([['_lbl_8C327548', '_lbl_8C106E94']]);
INLINE_ASM(_func_8C106DD2, 0x20, "asm/nonmatching/./sdfunc/_func_8C106DD2.src");

// MERGE_LIST([['_lbl_8C327980', '_lbl_8C106EA0'], ["h'401A0380", 896], ['_lbl_8C327548', '_lbl_8C106E94'], ['_memset', '_lbl_8C106E98'], ['_lbl_8C32756C', '_lbl_8C106E9C']]);
INLINE_ASM(_func_8C106DF2, 0x146, "asm/nonmatching/./sdfunc/_func_8C106DF2.src");

// MERGE_LIST([['_lbl_8C327548', '_lbl_8C107038']]);
INLINE_ASM(_func_8C106F38, 0x17e, "asm/nonmatching/./sdfunc/_func_8C106F38.src");

// MERGE_LIST([['_lbl_8C327988', '_lbl_8C107140'], ['_lbl_8C10419A', '_lbl_8C107144'], ["h'00000080", 128]]);
INLINE_ASM(_RequestAllStopSoundEx, 0x11c, "asm/nonmatching/./sdfunc/_RequestAllStopSoundEx.src");

// MERGE_LIST([['_lbl_8C102F46', '_lbl_8C107244'], ['_lbl_8C102E76', '_lbl_8C107248'], ['_lbl_8C102644', '_lbl_8C10724C'], ['_lbl_8C102E18', '_lbl_8C107250'], ['_lbl_8C3262E8', '_lbl_8C107254'], ['_lbl_8C1684B8', '_lbl_8C107258']]);
INLINE_ASM(_func_8C1071D2, 0xc, "asm/nonmatching/./sdfunc/_func_8C1071D2.src");

INLINE_ASM(_func_8C1071DE, 0xe, "asm/nonmatching/./sdfunc/_func_8C1071DE.src");

// MERGE_LIST([['_lbl_8C102B84', '_lbl_8C107260'], ['_lbl_8C102698', '_lbl_8C10725C']]);
INLINE_ASM(_func_8C1071EC, 0xe, "asm/nonmatching/./sdfunc/_func_8C1071EC.src");

// MERGE_LIST([['_lbl_8C102BA4', '_lbl_8C107268'], ['_lbl_8C1026DE', '_lbl_8C107264']]);
INLINE_ASM(_ResetSoundComInfo, 0x4, "asm/nonmatching/./sdfunc/_ResetSoundComInfo.src");

INLINE_ASM(_func_8C1071FE, 0x118, "asm/nonmatching/./sdfunc/_func_8C1071FE.src");

// MERGE_LIST([['_lbl_8C3262E8', '_lbl_8C107380'], ['_lbl_8C3262F0', '_lbl_8C107384'], ['_lbl_8C3262E4', '_lbl_8C10737C'], ['_lbl_8C1684B8', '_lbl_8C107388'], ['_lbl_8C105DBC', '_lbl_8C10738C'], ["h'00A300FA", 250], ['_lbl_8C102D96', '_lbl_8C107390'], ['_lbl_8C10419E', '_lbl_8C107378']]);
INLINE_ASM(_func_8C107316, 0x54, "asm/nonmatching/./sdfunc/_func_8C107316.src");

// MERGE_LIST([['_lbl_8C3262E8', '_lbl_8C107380'], ["h'00E300A3", 163], ["h'019000E3", 227], ['_lbl_8C13B7E0', '_lbl_8C107394'], ["h'00000190", 400], ['__quick_evn_mvn', '_lbl_8C107398'], ['_lbl_8C3262E4', '_lbl_8C10737C']]);
INLINE_ASM(_func_8C10736A, 0x4, "asm/nonmatching/./sdfunc/_func_8C10736A.src");

INLINE_ASM(_func_8C10736E, 0x7a, "asm/nonmatching/./sdfunc/_func_8C10736E.src");

// MERGE_LIST([['_lbl_8C3279B4', '_lbl_8C107600'], ['_lbl_8C104E04', '_lbl_8C107604'], ['_lbl_8C32798C', '_lbl_8C1075EC'], ['_lbl_8C102644', '_lbl_8C1075F0'], ['_memset', '_lbl_8C1075F4'], ['_lbl_8C327998', '_lbl_8C1075F8'], ['_lbl_8C3279AC', '_lbl_8C1075FC']]);
INLINE_ASM(_func_8C1073E8, 0x4, "asm/nonmatching/./sdfunc/_func_8C1073E8.src");

INLINE_ASM(_func_8C1073EC, 0x62, "asm/nonmatching/./sdfunc/_func_8C1073EC.src");

// MERGE_LIST([['_lbl_8C168790', '_lbl_8C107608'], ['_lbl_8C327990', '_lbl_8C10760C']]);
INLINE_ASM(_func_8C10744E, 0x1e, "asm/nonmatching/./sdfunc/_func_8C10744E.src");

// MERGE_LIST([['_lbl_8C327990', '_lbl_8C10760C']]);
INLINE_ASM(_func_8C10746C, 0x96, "asm/nonmatching/./sdfunc/_func_8C10746C.src");

// MERGE_LIST([['_lbl_8C103F02', '_lbl_8C107620'], ['_lbl_8C103F50', '_lbl_8C107624'], ['_lbl_8C3279BC', '_lbl_8C107628'], ['_cam', '_lbl_8C107610'], ['_lbl_8C3262B0', '_lbl_8C107614'], ['_plp', '_lbl_8C107618'], ['_lbl_8C3262BC', '_lbl_8C10761C']]);
INLINE_ASM(_RequestReadIsoFile, 0x48, "asm/nonmatching/./sdfunc/_RequestReadIsoFile.src");

// MERGE_LIST([['_lbl_8C168500', '_lbl_8C107640'], ['_lbl_8C1684FC', '_lbl_8C10762C'], ['_lbl_8C103A86', '_lbl_8C107630'], ['_lbl_8C3279C4', '_lbl_8C107634'], ['_lbl_8C103AEE', '_lbl_8C107638'], ['_lbl_8C3279EC', '_lbl_8C10763C']]);
INLINE_ASM(_RequestReadInsideFile, 0x48, "asm/nonmatching/./sdfunc/_RequestReadInsideFile.src");

// MERGE_LIST([['_lbl_8C168500', '_lbl_8C107640'], ['_lbl_8C103A3C', '_lbl_8C107644'], ['_lbl_8C1684FC', '_lbl_8C10762C'], ['_lbl_8C3279C4', '_lbl_8C107634'], ['_lbl_8C103AEE', '_lbl_8C107638'], ['_lbl_8C3279EC', '_lbl_8C10763C']]);
INLINE_ASM(_func_8C107592, 0x32, "asm/nonmatching/./sdfunc/_func_8C107592.src");

// MERGE_LIST([['_lbl_8C103A86', '_lbl_8C107630'], ['_lbl_8C168500', '_lbl_8C107640'], ['_lbl_8C1684FC', '_lbl_8C10762C'], ['_lbl_8C3279C4', '_lbl_8C107634']]);
INLINE_ASM(_func_8C1075C4, 0x22, "asm/nonmatching/./sdfunc/_func_8C1075C4.src");

// MERGE_LIST([['_lbl_8C103C24', '_lbl_8C107648'], ['_lbl_8C1684FC', '_lbl_8C10762C'], ['_lbl_8C3279C4', '_lbl_8C107634']]);
INLINE_ASM(_func_8C1075E6, 0x4, "asm/nonmatching/./sdfunc/_func_8C1075E6.src");

INLINE_ASM(_func_8C1075EA, 0x9c, "asm/nonmatching/./sdfunc/_func_8C1075EA.src");

// MERGE_LIST([['_lbl_8C1684FC', '_lbl_8C1077E0'], ['_lbl_8C3279C4', '_lbl_8C1077E4'], ['_lbl_8C103B22', '_lbl_8C1077E8'], ['_lbl_8C3279EC', '_lbl_8C1077EC'], ['_lbl_8C168500', '_FileReadStatus']]);
INLINE_ASM(_func_8C107686, 0x2c, "asm/nonmatching/./sdfunc/_func_8C107686.src");

// MERGE_LIST([['_lbl_8C1684FC', '_lbl_8C1077E0'], ['_lbl_8C3279C4', '_lbl_8C1077E4'], ['_lbl_8C103B9E', '_lbl_8C1077F4'], ['_lbl_8C168500', '_FileReadStatus']]);
INLINE_ASM(_func_8C1076B2, 0x6, "asm/nonmatching/./sdfunc/_func_8C1076B2.src");

// MERGE_LIST([['_lbl_8C101E64', '_lbl_8C1077F8']]);
INLINE_ASM(_GetInsideFileSize, 0x34, "asm/nonmatching/./sdfunc/_GetInsideFileSize.src");

// MERGE_LIST([['_lbl_8C103ACE', '_lbl_8C107800'], ['_lbl_8C103B9E', '_lbl_8C1077F4'], ['_lbl_8C103A3C', '_lbl_8C1077FC']]);
INLINE_ASM(_GetReadFileStatus, 0x6, "asm/nonmatching/./sdfunc/_GetReadFileStatus.src");

// MERGE_LIST([['_lbl_8C168500', '_FileReadStatus']]);
INLINE_ASM(_func_8C1076F2, 0x5c, "asm/nonmatching/./sdfunc/_func_8C1076F2.src");

// MERGE_LIST([['_lbl_8C1684FC', '_lbl_8C1077E0'], ['_lbl_8C1020B6', '_lbl_8C107804'], ['_lbl_8C3279C4', '_lbl_8C1077E4'], ['_lbl_8C326244', '_lbl_8C107808'], ['_CheckSoftResetKeyFlag', '_lbl_8C10780C'], ['_lbl_8C103BC2', '_lbl_8C107810'], ['_lbl_8C168500', '_FileReadStatus'], ['_lbl_8C103B52', '_lbl_8C107814']]);
INLINE_ASM(_PlayStartMovieEx, 0x208, "asm/nonmatching/./sdfunc/_PlayStartMovieEx.src");

// MERGE_LIST([['_lbl_8C103772', '_lbl_8C107980'], ["h'80000000", '_lbl_8C107984'], ['_lbl_8C103760', '_lbl_8C107988'], ["h'654E0080", 128], ['_lbl_8C10654E', '_lbl_8C10795C'], ['_lbl_8C1066C2', '_lbl_8C107960'], ['_lbl_8C103DC0', '_lbl_8C107964'], ['_lbl_8C13B7E8', '_lbl_8C107968'], ['_sprintf', '_lbl_8C10796C'], ['_lbl_8C10369C', '_lbl_8C107970'], ['_lbl_8C103788', '_lbl_8C107974'], ['_lbl_8C1687CC', '_lbl_8C107978'], ["h'4479C000", '_lbl_8C10797C']]);
INLINE_ASM(_func_8C107956, 0x4, "asm/nonmatching/./sdfunc/_func_8C107956.src");

INLINE_ASM(_func_8C10795A, 0x64, "asm/nonmatching/./sdfunc/_func_8C10795A.src");

// MERGE_LIST([['_lbl_8C1036AE', '_lbl_8C107BA0'], ['_bhReleaseFreeMemory', '_lbl_8C107BA4'], ['_AdxDef', '_lbl_8C107BA8'], ['_lbl_8C103E18', '_lbl_8C107BAC'], ['_lbl_8C3279F0', '_lbl_8C107B9C']]);
INLINE_ASM(_func_8C1079BE, 0x4, "asm/nonmatching/./sdfunc/_func_8C1079BE.src");

// MERGE_LIST([['_lbl_8C1036AE', '_lbl_8C107BA0'], ['_bhReleaseFreeMemory', '_lbl_8C107BA4'], ['_AdxDef', '_lbl_8C107BA8'], ['_lbl_8C103E18', '_lbl_8C107BAC'], ['_lbl_8C3279F0', '_lbl_8C107B9C']]);
INLINE_ASM(_func_8C1079C2, 0x6, "asm/nonmatching/./sdfunc/_func_8C1079C2.src");

// MERGE_LIST([['_lbl_8C327A06', '_lbl_8C107BB0']]);
INLINE_ASM(_func_8C1079C8, 0x12, "asm/nonmatching/./sdfunc/_func_8C1079C8.src");

// MERGE_LIST([['_lbl_8C327A06', '_lbl_8C107BB0'], ['_lbl_8C1034E8', '_lbl_8C107BB4']]);
INLINE_ASM(_WaitPrePlayMovie, 0x8a, "asm/nonmatching/./sdfunc/_WaitPrePlayMovie.src");

// MERGE_LIST([['_lbl_8C327B18', '_lbl_8C107BC0'], ['_lbl_8C327A3C', '_lbl_8C107BC4'], ['_lbl_8C1036F4', '_lbl_8C107BC8'], ['_lbl_8C3279F0', '_lbl_8C107B9C'], ['_lbl_8C103760', '_lbl_8C107BCC'], ['_lbl_8C103752', '_lbl_8C107BD0'], ['_lbl_8C326244', '_lbl_8C107BB8'], ['_CheckSoftResetKeyFlag', '_lbl_8C107BBC']]);
INLINE_ASM(_PlayMovieMain, 0xd4, "asm/nonmatching/./sdfunc/_PlayMovieMain.src");

// MERGE_LIST([['_lbl_8C327B18', '_lbl_8C107BC0'], ['_lbl_8C327A3C', '_lbl_8C107BC4'], ['_lbl_8C3279F0', '_lbl_8C107B9C'], ['_lbl_8C103740', '_lbl_8C107BDC'], ['_lbl_8C103760', '_lbl_8C107BCC'], ['_lbl_8C173810', '_lbl_8C107BD4'], ['_lbl_8C10377A', '_lbl_8C107BD8'], ['_lbl_8C326244', '_lbl_8C107BB8'], ['_CheckSoftResetKeyFlag', '_lbl_8C107BBC']]);
INLINE_ASM(_func_8C107B38, 0x6, "asm/nonmatching/./sdfunc/_func_8C107B38.src");

// MERGE_LIST([['_lbl_8C327A0C', '_lbl_8C107BE0']]);
INLINE_ASM(_func_8C107B3E, 0x5c, "asm/nonmatching/./sdfunc/_func_8C107B3E.src");

// MERGE_LIST([['_lbl_8C327A0C', '_lbl_8C107BE0'], ['_sys', '_lbl_8C107BE4'], ["h'00400000", '_lbl_8C107BE8'], ['_lbl_8C16882C', '_lbl_8C107BEC'], ['_lbl_8C1688AC', '_lbl_8C107BF0'], ['_lbl_8C128E04', '_lbl_8C107BF4']]);
INLINE_ASM(_func_8C107B9A, 0x70, "asm/nonmatching/./sdfunc/_func_8C107B9A.src");

// MERGE_LIST([['_lbl_8C327B18', '_lbl_8C107C78']]);
INLINE_ASM(_func_8C107C0A, 0x12, "asm/nonmatching/./sdfunc/_func_8C107C0A.src");

// MERGE_LIST([['_lbl_8C128E64', '_lbl_8C107C7C']]);
INLINE_ASM(_func_8C107C1C, 0x6, "asm/nonmatching/./sdfunc/_func_8C107C1C.src");

// MERGE_LIST([['_lbl_8C327B18', '_lbl_8C107C78']]);
INLINE_ASM(_func_8C107C22, 0x8, "asm/nonmatching/./sdfunc/_func_8C107C22.src");

// MERGE_LIST([['_lbl_8C1688B4', '_lbl_8C107C80']]);
INLINE_ASM(_RequestAdjustDisplay, 0x12, "asm/nonmatching/./sdfunc/_RequestAdjustDisplay.src");

// MERGE_LIST([['_sys', '_lbl_8C107C84']]);
INLINE_ASM(_func_8C107C3C, 0x2a, "asm/nonmatching/./sdfunc/_func_8C107C3C.src");

// MERGE_LIST([['_lbl_8C1688B4', '_lbl_8C107C80'], ['_sys', '_lbl_8C107C84'], ['_lbl_8C17BD22', '_lbl_8C107C88']]);
INLINE_ASM(_InitPlayLogSystem, 0x4, "asm/nonmatching/./sdfunc/_InitPlayLogSystem.src");

INLINE_ASM(_func_8C107C6A, 0x4, "asm/nonmatching/./sdfunc/_func_8C107C6A.src");

INLINE_ASM(_func_8C107C6E, 0x4, "asm/nonmatching/./sdfunc/_func_8C107C6E.src");

INLINE_ASM(_func_8C107C72, 0x4, "asm/nonmatching/./sdfunc/_func_8C107C72.src");

INLINE_ASM(_func_8C107C76, 0xa6, "asm/nonmatching/./sdfunc/_func_8C107C76.src");

// MERGE_LIST([['_lbl_8C327A24', '_lbl_8C107DA0'], ['_lbl_8C327B1C', '_lbl_8C107DA4'], ["h'00020000", '_lbl_8C107DA8'], ["h'00010000", '_lbl_8C107DAC'], ['_lbl_8C327C3C', '_lbl_8C107DB0'], ['_lbl_8C327B18', '_lbl_8C107DB4'], ['_lbl_8C327B14', '_lbl_8C107DB8'], ["h'00800120", 288], ["h'00000080", 128]]);
INLINE_ASM(_func_8C107D1C, 0x4, "asm/nonmatching/./sdfunc/_func_8C107D1C.src");

// MERGE_LIST([['_lbl_8C327A24', '_lbl_8C107DA0'], ['_lbl_8C327B1C', '_lbl_8C107DA4'], ["h'00020000", '_lbl_8C107DA8'], ["h'00010000", '_lbl_8C107DAC'], ['_lbl_8C327C3C', '_lbl_8C107DB0'], ['_lbl_8C327B18', '_lbl_8C107DB4'], ['_lbl_8C327B14', '_lbl_8C107DB8'], ["h'00800120", 288], ["h'00000080", 128]]);
