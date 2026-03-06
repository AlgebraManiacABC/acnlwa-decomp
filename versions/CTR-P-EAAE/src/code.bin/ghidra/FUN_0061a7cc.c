/**
 * FUN_0061a7cc.c
 * Source line: 931471
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0061a7cc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_1 = *param_3;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_3 + 1);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_3 + 6);
  uVar1 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar1;
  return;
}
