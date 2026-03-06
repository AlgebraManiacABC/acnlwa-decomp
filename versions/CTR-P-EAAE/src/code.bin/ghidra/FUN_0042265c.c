/**
 * FUN_0042265c.c
 * Source line: 587808
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0042265c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_r5;
  
  iVar2 = iRam00974a64 + (uint)*(byte *)(iRam00974a64 + 0xb5) * 4;
  piVar1 = *(int **)(iVar2 + 0xb8);
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,param_1 + 0x44,*(undefined4 *)(iVar2 + 0xc4));
  if (iVar2 < 0) {
    FUN_00426224(*(undefined4 *)(param_1 + 0x40),iVar2);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  *(undefined **)(param_1 + 0x24) = &UNK_00422720;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalMatchDestroySessionJob::WaitDestroyLocalNetwork";
  return unaff_r5 & 0xff00 | 5;
}
