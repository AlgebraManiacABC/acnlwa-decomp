/**
 * FUN_0040ad88.c
 * Source line: 575710
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0040ad88(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x12) = param_2;
  *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | 1;
  return;
}
