/**
 * FUN_005a9054.c
 * Source line: 855968
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005a9054(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *param_1 = &UNK_00907df8;
  *(undefined1 *)(param_1 + 4) = param_3;
  param_1[5] = param_4;
  *(undefined1 *)(param_1 + 6) = param_5;
  param_1[7] = param_6;
  param_1[8] = param_7;
  return;
}
