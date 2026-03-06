/**
 * FUN_005a6b8c.c
 * Source line: 854358
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_005a6b8c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_005a8af0(param_1 + 4);
  return param_1;
}
