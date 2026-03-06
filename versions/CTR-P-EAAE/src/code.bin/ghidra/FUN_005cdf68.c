/**
 * FUN_005cdf68.c
 * Source line: 880291
 * Body lines: 4
 */
#include "../../../include/types.h"

uint FUN_005cdf68(uint param_1)

{
  if (0xfe < param_1) {
    param_1 = 0;
  }
  return (*(byte *)(param_1 + 0x95dd1a) & 2) >> 1;
}
