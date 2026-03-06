/**
 * FUN_004b9b38.c
 * Source line: 697056
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004b9b38(int param_1)

{
  if (*(int **)(param_1 + 0x10) != NULL) {
          // WARNING: Could not recover jumptable at 0x004b9b4c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x10) + 0x5c))();
    return;
  }
  return;
}
