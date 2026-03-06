/**
 * FUN_00747f90.c
 * Source line: 1103954
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00747f90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 0;
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    iVar1 = FUN_003df908();
    if (0 < iVar1) {
      uVar2 = 1;
    }
  }
          // WARNING: Could not recover jumptable at 0x00747fc0. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}
