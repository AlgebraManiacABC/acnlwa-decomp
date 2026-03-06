/**
 * FUN_00524598.c
 * Source line: 767082
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00524598(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[1] = param_2;
  return;
}
