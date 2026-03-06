/**
 * FUN_00461930.c
 * Source line: 628903
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00461930(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  
  __rt_memcpy((uint *)(*param_1 + param_1[3] * 4),param_2,param_3 << 2);
  iVar1 = param_1[3];
  param_1[3] = iVar1 + param_3;
  if (param_1[1] <= iVar1 + param_3) {
    param_1[3] = 0;
  }
  return;
}
