/**
 * FUN_00718f80.c
 * Source line: 1071919
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00718f80(int param_1)

{
  if (*(int **)(param_1 + 0x118) != NULL) {
          // WARNING: Could not recover jumptable at 0x00718f94. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x118) + 0xc))();
    return;
  }
  return;
}
