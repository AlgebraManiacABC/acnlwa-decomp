/**
 * FUN_004bfa3c.c
 * Source line: 701777
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004bfa3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00975176 == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    uVar2 = FUN_00140f54();
    FUN_004c8800(uVar2,param_2,*(undefined4 *)(param_1 + 0xc));
    uVar2 = FUN_004c8c00();
    FUN_004c8800(uVar2,iVar1 + param_2,*(undefined4 *)(param_1 + 0x18));
    cRam00975176 = '\x01';
  }
  return;
}
