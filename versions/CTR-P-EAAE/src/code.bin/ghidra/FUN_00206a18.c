/**
 * FUN_00206a18.c
 * Source line: 265105
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00206a18(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004ee4c8();
    FUN_004f1294(*(undefined4 *)(param_1 + 4));
          // WARNING: Could not recover jumptable at 0x00206a48. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  return;
}
