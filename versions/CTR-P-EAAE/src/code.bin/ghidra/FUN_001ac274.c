/**
 * FUN_001ac274.c
 * Source line: 215975
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001ac274(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0xb8);
  iVar1 = FUN_004ed570(*(int *)(param_1 + 0x34) + 0x78);
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x220) + 0xc))();
  iVar1 = *(int *)(iVar1 + 4) + iVar2 * 0x40;
  FUN_0013451c(iVar1,param_1);
  *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 0x800;
  return;
}
