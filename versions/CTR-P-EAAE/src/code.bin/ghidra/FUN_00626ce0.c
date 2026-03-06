/**
 * FUN_00626ce0.c
 * Source line: 940639
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00626ce0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = 0;
  return;
}
