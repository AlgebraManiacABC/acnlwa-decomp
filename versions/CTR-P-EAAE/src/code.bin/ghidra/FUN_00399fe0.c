/**
 * FUN_00399fe0.c
 * Source line: 504425
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00399fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_003d743c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  piVar3 = *(int **)(param_1 + 0x40);
  if (piVar3 != NULL) {
    (**(code **)(*piVar3 + 8))(piVar3,param_2);
  }
          // WARNING: Could not recover jumptable at 0x0039a030. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}
