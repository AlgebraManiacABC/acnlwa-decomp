/**
 * FUN_007447e8.c
 * Source line: 1100884
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007447e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  if (iVar2 <= iVar1) {
          // WARNING: Could not recover jumptable at 0x0074482c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 4) + 0x50))();
    return;
  }
          // WARNING: Could not recover jumptable at 0x00744840. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 8) + 0x50))();
  return;
}
