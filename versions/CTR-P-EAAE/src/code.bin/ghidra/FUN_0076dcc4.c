/**
 * FUN_0076dcc4.c
 * Source line: 1131024
 * Body lines: 4
 */
#include "../../../include/types.h"

byte FUN_0076dcc4(int param_1,uint param_2)

{
  if ((param_2 != 0xffff) && (param_2 < 0x200)) {
    return *(byte *)(param_1 + 0xa424 + (param_2 >> 3)) >> (param_2 & 7) & 1;
  }
  return 0;
}
