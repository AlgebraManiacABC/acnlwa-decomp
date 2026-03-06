/**
 * FUN_00529c48.c
 * Source line: 769804
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00529c48(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_003cd24c();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
          // WARNING: Could not recover jumptable at 0x00529c7c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}
