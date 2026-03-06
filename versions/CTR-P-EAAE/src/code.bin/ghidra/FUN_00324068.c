/**
 * FUN_00324068.c
 * Source line: 426236
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00324068(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_002c3b70(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[7];
  piVar1[0x74] = param_3;
  piVar1[0x75] = 0x41200000;
  piVar1[0x76] = *(int *)(DAT_0094d764 + 0x18);
  return;
}
