/**
 * FUN_0014df7c.c
 * Source line: 162430
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0014df7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = uVar1;
  param_1[2] = uVar2;
  return;
}
