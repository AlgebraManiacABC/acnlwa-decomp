/**
 * FUN_004bf1e4.c
 * Source line: 701314
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004bf1e4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0xd];
  if ((param_2 <= iVar1) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  param_1[0xc] = iVar1;
  while (param_1[0xc] < *param_1) {
    (**(code **)(*(int *)(param_1[4] + -0x108) + 0x10))();
  }
  return;
}
