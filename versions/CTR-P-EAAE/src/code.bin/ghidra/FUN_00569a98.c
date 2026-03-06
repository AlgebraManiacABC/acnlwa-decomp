/**
 * FUN_00569a98.c
 * Source line: 811228
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00569a98(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    FUN_004b6598(param_1 + 0xc);
    return;
  }
  return;
}
