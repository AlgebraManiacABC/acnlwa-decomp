/**
 * FUN_007d5df4.c
 * Source line: 1181095
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_007d5df4(int param_1)

{
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return param_1;
}
