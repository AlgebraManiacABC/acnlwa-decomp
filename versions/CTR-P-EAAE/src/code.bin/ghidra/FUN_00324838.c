/**
 * FUN_00324838.c
 * Source line: 426671
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00324838(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_002c3b70(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[7];
  piVar1[0x74] = param_3;
  piVar1[0x75] = param_4;
  piVar1[0x76] = 0x40a00000;
  piVar1[0x77] = 0;
  piVar1[0x78] = 0x96;
  *(undefined1 *)((int)piVar1 + 0x1ee) = 0;
  return;
}
