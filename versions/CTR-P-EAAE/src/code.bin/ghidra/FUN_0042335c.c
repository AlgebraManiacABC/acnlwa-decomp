/**
 * FUN_0042335c.c
 * Source line: 588150
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0042335c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = &UNK_00900298;
  *(undefined1 *)(param_1 + 3) = 0x13;
  *(undefined2 *)((int)param_1 + 0xe) = 0x10;
  return;
}
