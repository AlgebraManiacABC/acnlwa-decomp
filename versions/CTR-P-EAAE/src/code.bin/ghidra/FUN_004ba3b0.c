/**
 * FUN_004ba3b0.c
 * Source line: 697518
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004ba3b0(int param_1)

{
  if (*(int **)(param_1 + 0x10) != NULL) {
          // WARNING: Could not recover jumptable at 0x004ba3c4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x10) + 0x34))();
    return;
  }
  return;
}
