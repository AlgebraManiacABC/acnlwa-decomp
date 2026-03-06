/**
 * FUN_00406938.c
 * Source line: 573594
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00406938(int param_1)

{
  if (*(int **)(param_1 + 0x6c) != NULL) {
          // WARNING: Could not recover jumptable at 0x0040694c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
    return;
  }
  return;
}
