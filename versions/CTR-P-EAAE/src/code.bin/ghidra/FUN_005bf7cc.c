/**
 * FUN_005bf7cc.c
 * Source line: 869236
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005bf7cc(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3)

{
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *param_3;
  param_1[4] = 0;
  return;
}
