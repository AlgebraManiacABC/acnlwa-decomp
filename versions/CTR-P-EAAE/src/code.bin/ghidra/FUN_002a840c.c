/**
 * FUN_002a840c.c
 * Source line: 347239
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002a840c(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_002c3b70(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[7];
  *(undefined1 *)((int)piVar1 + 0x1cf) = 0;
  *(undefined1 *)(piVar1 + 0x74) = 0;
  return;
}
