/**
 * FUN_00122620.c
 * Source line: 124535
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00122620(int *param_1,undefined4 param_2)

{
  if (*param_1 < param_1[1]) {
    *(undefined4 *)(param_1[2] + *param_1 * 4) = param_2;
    *param_1 = *param_1 + 1;
  }
  return;
}
