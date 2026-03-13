/**
 * FUN_003d5820.c
 * Source line: 546824
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_003d5820(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2c) = param_2 | *(uint *)(param_1 + 0x2c);
  return;
}
