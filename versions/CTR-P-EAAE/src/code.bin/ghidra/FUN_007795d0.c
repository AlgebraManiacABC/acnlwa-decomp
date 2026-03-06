/**
 * FUN_007795d0.c
 * Source line: 1135984
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_007795d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return;
}
