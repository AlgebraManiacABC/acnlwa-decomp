/**
 * FUN_0043f2ec.c
 * Source line: 605777
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0043f2ec(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = iRam0097d428;
  if (*(char *)(param_1 + 0x7b) == '\0') {
    *(short *)(iRam0097d428 + 0x5c) = *(short *)(iRam0097d428 + 0x5c) + 1;
    FUN_0042d2a8(*(undefined4 *)(iVar1 + 0x4c),1);
  }
  *(undefined **)(param_1 + 0x24) = &UNK_0043f258;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
  return unaff_r5 & 0xff00;
}
