/**
 * FUN_001b9a88.c
 * Source line: 223836
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_001b9a88(uint param_1)

{
  return (param_1 & 1) + ((param_1 & 2) >> 1) +
         (((param_1 & 0x10) >> 4) + ((param_1 & 0x20) >> 5)) * 9 +
         (((param_1 & 0x40) >> 6) + ((param_1 & 0x80) >> 7)) * 0x1b +
         (((param_1 & 4) >> 2) + ((param_1 & 8) >> 3)) * 3;
}
