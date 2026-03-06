/**
 * FUN_002d37ac.c
 * Source line: 372160
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002d37ac(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xb0) = 0x6000028;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  iVar1 = ranqd2_ranged_int_from_seed_2(3);
  *(char *)(param_1 + 0xe2) = (char)iVar1;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_002d1bcc(param_1 + 4,0x9841d4);
    FUN_0012e804(0,param_1 + 0xb8);
    FUN_0012e804(0,param_1 + 0xcc);
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  return;
}
