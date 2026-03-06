/**
 * FUN_00569508.c
 * Source line: 810929
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00569508(int *param_1)

{
  (**(code **)(*param_1 + 8))((float)param_1[1] - 1.0,param_1);
  if (param_1[6] != 0) {
    *(int *)(param_1[6] + 0x10) = param_1[2];
  }
  return;
}
