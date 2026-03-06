/**
 * FUN_00524528.c
 * Source line: 767046
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00524528(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  return;
}
