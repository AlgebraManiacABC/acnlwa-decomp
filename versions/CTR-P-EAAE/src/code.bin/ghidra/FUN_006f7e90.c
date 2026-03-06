/**
 * FUN_006f7e90.c
 * Source line: 1053016
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_006f7e90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + *(int *)(param_1 + 4) * 4 + 8) = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}
