/**
 * FUN_001f963c.c
 * Source line: 258755
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001f963c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x98)) {
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x94) * 4) = param_2;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  return;
}
