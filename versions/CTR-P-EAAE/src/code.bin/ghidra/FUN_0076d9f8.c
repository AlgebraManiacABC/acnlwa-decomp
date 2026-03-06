/**
 * FUN_0076d9f8.c
 * Source line: 1130906
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_0076d9f8(int param_1,uint param_2)

{
  if (param_2 < 399) {
    if (param_2 >> 3 < 0x32) {
      return *(byte *)(param_1 + (param_2 >> 3) + 0x8f3c) >> (param_2 & 7) & 1;
    }
  }
  return 0;
}
