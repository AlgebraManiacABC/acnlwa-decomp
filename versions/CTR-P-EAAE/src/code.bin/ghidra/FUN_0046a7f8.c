/**
 * FUN_0046a7f8.c
 * Source line: 636538
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0046a7f8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  *param_1 = &UNK_009010c8;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  if (param_2 == 0) {
    param_1[4] = 0;
  }
  return;
}
