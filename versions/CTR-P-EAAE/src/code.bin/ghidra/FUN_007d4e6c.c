/**
 * FUN_007d4e6c.c
 * Source line: 1180318
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_007d4e6c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 auStack_14 [8];
  
  piVar1 = (int *)(param_1 + 0x24);
  (**(code **)(*piVar1 + 8))();
  iVar2 = *(int *)(param_1 + 0x60);
  while (iVar2 != 0) {
    local_18 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 8);
    FUN_00804210(auStack_14,param_1 + 0x4c,&local_18);
    iVar2 = *(int *)(param_1 + 0x60);
  }
          // WARNING: Could not recover jumptable at 0x007d4ed4. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
