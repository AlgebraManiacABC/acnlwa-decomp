/**
 * FUN_00420538.c
 * Source line: 587130
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00420538(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = param_4;
  *param_1 = &UNK_009000c8;
  *(undefined1 *)(param_1 + 3) = 0x11;
  *(undefined2 *)((int)param_1 + 0xe) = 0x1c;
  return;
}
