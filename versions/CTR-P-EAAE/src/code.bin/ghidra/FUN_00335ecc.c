/**
 * FUN_00335ecc.c
 * Source line: 436518
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00335ecc(int param_1,int param_2)

{
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x1ac) = 0xbf800000;
  }
  else {
    *(float *)(param_1 + 0x1ac) = -1.0 / (float)(longlong)param_2;
  }
  return;
}
