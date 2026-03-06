/**
 * FUN_0050cb9c.c
 * Source line: 750716
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0050cb9c(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 400) < 100) {
    *(undefined4 *)(param_1 + *(uint *)(param_1 + 400) * 4) = param_2;
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  }
  return;
}
