/**
 * FUN_006f8134.c
 * Source line: 1053160
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006f8134(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = &DAT_0090b178;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  param_2[2] = *param_3;
  param_2[3] = uVar1;
  param_2[4] = uVar2;
  param_2[5] = param_1;
  return;
}
