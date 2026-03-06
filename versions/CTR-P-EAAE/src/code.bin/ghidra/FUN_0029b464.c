/**
 * FUN_0029b464.c
 * Source line: 340212
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0029b464(int param_1)

{
  if (*(int **)(param_1 + 0xb4) != NULL) {
          // WARNING: Could not recover jumptable at 0x0029b478. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x60))();
    return;
  }
  return;
}
