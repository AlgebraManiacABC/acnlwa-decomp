/**
 * FUN_00158ecc.c
 * Source line: 171671
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00158ecc(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  *(undefined1 *)(param_5 + 4) = 1;
  param_5[5] = 0;
  *param_5 = param_1;
  param_5[6] = 0;
  param_5[1] = param_2 >> 1;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return;
}
