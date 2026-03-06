/**
 * FUN_003cf1c8.c
 * Source line: 541017
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_003cf1c8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_0082ea10(param_1,1);
  iVar1 = param_1[2];
  param_1[4] = iVar1;
  param_1[2] = iVar1 + 0x2c;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  return param_1;
}
