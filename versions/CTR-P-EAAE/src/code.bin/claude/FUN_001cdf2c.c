/**
 * FUN_001cdf2c.c
 * Source line: 234729
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_001cdf2c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xf87fffff | (param_2 & 0xf) << 0x17;
  return;
}
