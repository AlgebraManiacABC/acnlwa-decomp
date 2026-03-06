/**
 * FUN_006f83cc.c
 * Source line: 1053307
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006f83cc(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_3 + 1) = 2;
  *param_3 = &UNK_0090b1a0;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  param_3[2] = *param_4;
  param_3[3] = uVar1;
  param_3[4] = uVar2;
  param_3[5] = param_1;
  param_3[6] = param_2;
  return;
}
