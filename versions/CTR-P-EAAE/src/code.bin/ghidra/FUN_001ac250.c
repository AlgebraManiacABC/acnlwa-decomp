/**
 * FUN_001ac250.c
 * Source line: 215953
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001ac250(int param_1)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar2;
  
  FUN_001ac3cc(param_1 + 4);
  FUN_004edd20(param_1 + 0x78);
  iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 0xb8);
  iVar1 = FUN_004ed570(*(int *)(param_1 + 0x38) + 0x78);
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x220) + 0xc))();
  iVar1 = *(int *)(iVar1 + 4) + iVar2 * 0x40;
  FUN_0013451c(iVar1,param_1 + 4,extraout_r2,extraout_r3,unaff_r4);
  *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 0x800;
  return;
}
