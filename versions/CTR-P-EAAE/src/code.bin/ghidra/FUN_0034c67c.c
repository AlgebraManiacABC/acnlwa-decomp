/**
 * FUN_0034c67c.c
 * Source line: 449011
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0034c67c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0034ca80();
  iVar1 = *(int *)(param_2 + 0xbc);
  iVar2 = *(int *)(param_2 + 0x94);
  *param_1 = (*param_1 + 0xfffU & 0xfffff000) + param_2;
  param_1[1] = (param_1[1] + 0xfffU & 0xfffff000) + param_2;
  param_1[2] = (param_1[2] + 0xfffU & 0xfffff000) + param_2;
  param_1[3] = (param_1[3] + 0xfffU & 0xfffff000) + param_2;
  param_1[4] = (iVar1 + 7U & 0xfffffff8) + iVar2;
  return 0;
}
