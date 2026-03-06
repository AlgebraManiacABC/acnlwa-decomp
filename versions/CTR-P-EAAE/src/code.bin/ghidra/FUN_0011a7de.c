/**
 * FUN_0011a7de.c
 * Source line: 117723
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_0011a7de(int param_1,uint param_2)

{
  if (param_2 < 4) {
    return ((uint)(*(int *)(param_1 + 0x2510) << 0x19) >> 0x1c & 1 << (param_2 & 0xff)) != 0;
  }
  return false;
}
