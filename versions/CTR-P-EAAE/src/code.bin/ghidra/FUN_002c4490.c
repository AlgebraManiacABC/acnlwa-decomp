/**
 * FUN_002c4490.c
 * Source line: 363920
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002c4490(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_002c3b70(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[7];
  *(undefined1 *)(piVar1 + 0x77) = 0;
  return;
}
