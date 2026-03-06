/**
 * FUN_001379e4.c
 * Source line: 144301
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001379e4(byte *param_1)

{
  if (*param_1 < 4) {
    *param_1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 6;
  }
  return;
}
