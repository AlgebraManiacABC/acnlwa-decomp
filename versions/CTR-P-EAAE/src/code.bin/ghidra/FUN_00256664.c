/**
 * FUN_00256664.c
 * Source line: 305992
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00256664(int param_1,int param_2)

{
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x2b4) = 0xbf800000;
  }
  else {
    *(float *)(param_1 + 0x2b4) = -1.0 / (float)(longlong)param_2;
  }
  return;
}
