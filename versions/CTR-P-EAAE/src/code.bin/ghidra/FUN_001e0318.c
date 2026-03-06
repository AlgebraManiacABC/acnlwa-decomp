/**
 * FUN_001e0318.c
 * Source line: 246616
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_001e0318(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0027a48c();
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  return param_1;
}
