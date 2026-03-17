/**
 * FUN_0040ad68.c
 * Source line: 575699
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0040ad68(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  *(undefined2 *)(param_1 + 0x16) = param_2;
  *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | 2;
  return;
}
