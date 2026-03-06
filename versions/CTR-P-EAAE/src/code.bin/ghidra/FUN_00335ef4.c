/**
 * FUN_00335ef4.c
 * Source line: 436532
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00335ef4(int param_1,int param_2,int param_3)

{
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  }
  else {
    *(float *)(param_1 + 0x1ac) = 1.0 / (float)(longlong)param_2;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (param_3 < 1) {
    *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
  }
  else {
    *(float *)(param_1 + 0x1b4) = 1.0 / (float)(longlong)param_3;
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return;
}
