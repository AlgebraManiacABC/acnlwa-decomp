/**
 * FUN_0025668c.c
 * Source line: 306006
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0025668c(int param_1,int param_2,int param_3)

{
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
  }
  else {
    *(float *)(param_1 + 0x2b4) = 1.0 / (float)(longlong)param_2;
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (param_3 < 1) {
    *(undefined4 *)(param_1 + 700) = 0x3f800000;
  }
  else {
    *(float *)(param_1 + 700) = 1.0 / (float)(longlong)param_3;
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  return;
}
