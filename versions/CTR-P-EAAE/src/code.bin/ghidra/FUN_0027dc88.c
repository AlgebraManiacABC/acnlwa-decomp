/**
 * FUN_0027dc88.c
 * Source line: 326034
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0027dc88(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_001e90e4(param_1,param_2 + 1);
  piVar2 = (int *)FUN_002fd0c4(iVar1 + 0xd0,param_2 + 5);
  iVar1 = *param_2;
  piVar2[-0x34] = iVar1;
  *(int *)((int)(piVar2 + -0x34) + *(int *)(iVar1 + -0xc)) = param_2[7];
  *piVar2 = param_2[8];
  *(undefined1 *)(piVar2 + 0x12) = 0;
  iVar1 = FUN_002d59d4(piVar2 + 0x13);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  return;
}
