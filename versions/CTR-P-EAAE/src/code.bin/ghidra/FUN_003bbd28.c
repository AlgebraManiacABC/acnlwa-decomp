/**
 * FUN_003bbd28.c
 * Source line: 528885
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_003bbd28(undefined4 param_1,int param_2)

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
  iVar2 = FUN_003cd24c();
  FUN_003917b8(*(undefined4 *)(iVar2 + 0x10),param_2,*(undefined4 *)(param_2 + 0x78));
          // WARNING: Could not recover jumptable at 0x003bbd74. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}
