/**
 * FUN_001e90e4.c
 * Source line: 250857
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001e90e4(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_001f4fec(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[3];
  *(undefined1 *)((int)piVar1 + 0xc9) = 0;
  *(undefined1 *)((int)piVar1 + 0xca) = 0;
  *(undefined2 *)(piVar1 + 0x33) = 0;
  *(undefined2 *)((int)piVar1 + 0xce) = 0;
  return;
}
