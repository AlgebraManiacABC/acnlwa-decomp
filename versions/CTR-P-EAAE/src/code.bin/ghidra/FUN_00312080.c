/**
 * FUN_00312080.c
 * Source line: 415176
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined2 * FUN_00312080(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 3) = 0;
  FUN_0030f56c(param_1);
  return param_1;
}
