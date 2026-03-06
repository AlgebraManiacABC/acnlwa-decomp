/**
 * FUN_0056e6a8.c
 * Source line: 815211
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0056e6a8(int param_1)

{
  if (*(int **)(param_1 + 0x300) != NULL) {
          // WARNING: Could not recover jumptable at 0x0056e6bc. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x300) + 0x3c))();
    return;
  }
  return;
}
