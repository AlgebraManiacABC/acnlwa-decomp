/**
 * FUN_00733c80.c
 * Source line: 1089563
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00733c80(int param_1)

{
  if (*(int **)(param_1 + 8) + -0x40000 < (int *)0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x00733ca0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 8) + 0x28))();
    return;
  }
  return;
}
