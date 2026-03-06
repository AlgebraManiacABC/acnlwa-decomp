/**
 * FUN_004285bc.c
 * Source line: 592134
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_004285bc(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_004287d4(param_1 + 2);
  return param_1;
}
