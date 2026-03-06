/**
 * FUN_001289ac.c
 * Source line: 129994
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001289ac(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  return;
}
