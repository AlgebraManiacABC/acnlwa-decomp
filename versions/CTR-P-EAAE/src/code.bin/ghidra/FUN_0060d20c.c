/**
 * FUN_0060d20c.c
 * Source line: 924231
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0060d20c(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  return;
}
