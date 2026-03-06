/**
 * FUN_003630bc.c
 * Source line: 467646
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_003630bc(int param_1)

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
  FUN_0035c08c(param_1 + 0x270);
          // WARNING: Could not recover jumptable at 0x003630fc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}
