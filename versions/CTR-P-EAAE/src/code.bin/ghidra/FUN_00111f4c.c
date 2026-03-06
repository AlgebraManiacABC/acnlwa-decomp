/**
 * FUN_00111f4c.c
 * Source line: 112891
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_00111f4c(uint param_1,int param_2)

{
  if ((param_2 != 0) && (param_1 < NUM_VILLAGERS)) {
    if (param_1 >> 3 < 50) {
      return *(byte *)(param_2 + (param_1 >> 3)) >> (param_1 & 7) & 1;
    }
  }
  return 0;
}
