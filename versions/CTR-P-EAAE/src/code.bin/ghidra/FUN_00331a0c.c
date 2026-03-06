/**
 * FUN_00331a0c.c
 * Source line: 434547
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00331a0c(undefined4 param_1,undefined4 param_2,undefined2 *param_3,undefined2 param_4)

{
  *param_3 = param_4;
  param_3[6] = param_4;
  *(undefined4 *)(param_3 + 2) = param_1;
  *(undefined4 *)(param_3 + 4) = param_2;
  return;
}
