/**
 * FUN_0076dc8c.c
 * Source line: 1131013
 * Body lines: 4
 */
#include "../../../include/types.h"

byte FUN_0076dc8c(int param_1,uint param_2)

{
  if ((param_2 != 0xffff) && (param_2 < 0x200)) {
    return *(byte *)(param_1 + 0xa3e4 + (param_2 >> 3)) >> (param_2 & 7) & 1;
  }
  return 0;
}
