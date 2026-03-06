/**
 * FUN_00416404.c
 * Source line: 581872
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00416404(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = &UNK_008ff85c;
  param_1[5] = param_5;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined2 *)((int)param_1 + 0xe) = 0x14;
  return;
}
