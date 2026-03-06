/**
 * FUN_003d6080.c
 * Source line: 547343
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_003d6080(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &UNK_008fec4c;
  iVar1 = FUN_003619b0(0x20);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = switchD_001cf900::caseD_3();
  }
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 7;
  return param_1;
}
