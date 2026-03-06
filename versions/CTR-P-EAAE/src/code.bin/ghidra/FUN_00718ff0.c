/**
 * FUN_00718ff0.c
 * Source line: 1071959
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00718ff0(int param_1)

{
  if (*(int **)(param_1 + 0x118) != NULL) {
          // WARNING: Could not recover jumptable at 0x00719004. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x118) + 0x20))();
    return;
  }
  return;
}
