/**
 * FUN_002f747c.c
 * Source line: 389558
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002f747c(int param_1)

{
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}
