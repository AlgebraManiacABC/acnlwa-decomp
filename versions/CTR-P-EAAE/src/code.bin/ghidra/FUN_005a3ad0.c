/**
 * FUN_005a3ad0.c
 * Source line: 852044
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005a3ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[2] = param_2;
  param_1[5] = param_2;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[1] = 0;
  *param_1 = &UNK_00907d70;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  return;
}
