/**
 * FUN_005b4ce8.c
 * Source line: 864986
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_005b4ce8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 100) = param_2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}
