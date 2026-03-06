/**
 * FUN_0076f330.c
 * Source line: 1132371
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0076f330(int param_1)

{
  if (*(int **)(param_1 + 0x6b90) != NULL) {
          // WARNING: Could not recover jumptable at 0x0076f34c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x6b90) + 0x78))();
    return;
  }
  return;
}
