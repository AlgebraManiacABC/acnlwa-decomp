/**
 * FUN_0048b470.c
 * Source line: 661443
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0048b470(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  uVar2 = iVar1 + (param_2 - 1U) & ~(param_2 - 1U);
  __rt_memclr((undefined4 *)(*param_1 + iVar1),uVar2 - iVar1);
  param_1[1] = uVar2;
  return;
}
