/**
 * FUN_004c52a0.c
 * Source line: 705626
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004c52a0(int param_1,int param_2)

{
  float fVar1;
  
  if (param_2 == 0x7f) {
    fVar1 = 65535.0;
  }
  else if (param_2 == 0x7e) {
    fVar1 = 24.0;
  }
  else if (param_2 < 0x32) {
    fVar1 = (float)(longlong)(param_2 * 2 + 1) * 0.0078125 * 0.2;
  }
  else {
    fVar1 = (60.0 / (float)(longlong)(0x7e - param_2)) * 0.2;
  }
  *(float *)(param_1 + 0xc) = fVar1;
  return;
}
