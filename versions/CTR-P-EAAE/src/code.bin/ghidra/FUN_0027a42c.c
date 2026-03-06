/**
 * FUN_0027a42c.c
 * Source line: 323788
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0027a42c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  return;
}
