/**
 * FUN_004205fc.c
 * Source line: 587183
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004205fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = &UNK_009000e0;
  *(undefined1 *)(param_1 + 3) = 0x12;
  *(undefined2 *)((int)param_1 + 0xe) = 0x10;
  return;
}
