/**
 * FUN_005b0438.c
 * Source line: 861641
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005b0438(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2c) = param_2 & 0x1f | *(uint *)(param_1 + 0x2c) & 0xffffffe0;
  return;
}
