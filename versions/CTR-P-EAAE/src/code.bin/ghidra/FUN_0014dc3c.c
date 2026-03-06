/**
 * FUN_0014dc3c.c
 * Source line: 162214
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0014dc3c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[3] = *param_2;
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  *param_1 = uVar3;
  return;
}
