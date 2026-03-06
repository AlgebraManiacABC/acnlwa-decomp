/**
 * FUN_007d5dc8.c
 * Source line: 1181083
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_007d5dc8(int param_1)

{
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  FUN_00354ba0(param_1);
  return;
}
