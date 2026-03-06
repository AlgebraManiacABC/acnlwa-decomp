/**
 * FUN_005a2624.c
 * Source line: 851068
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005a2624(int param_1,uint param_2,uint param_3)

{
  if ((-1 < (int)param_2 && -1 < (int)param_3) && (param_2 < 0x70 && param_3 < 0x60)) {
    param_2 += param_3 * 0x70;
    param_1 += ((int)param_2 >> 5) * 4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1 << (param_2 & 0x1f);
  }
  return;
}
