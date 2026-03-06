/**
 * FUN_00459d40.c
 * Source line: 623264
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00459d40(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *param_1 = param_3;
  param_1[3] = *param_2;
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)((int)param_1 + 0x15) = param_5;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x32] = 0;
  return;
}
