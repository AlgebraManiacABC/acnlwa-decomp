/**
 * FUN_00414484.c
 * Source line: 580301
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00414484(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined2 *)((int)param_1 + 0xe) = 0xc;
  *param_1 = &UNK_008ff7c0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}
