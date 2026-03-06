/**
 * FUN_0056a3cc.c
 * Source line: 811746
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0056a3cc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}
