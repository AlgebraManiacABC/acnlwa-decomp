/**
 * FUN_0020ae2c.c
 * Source line: 267472
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0020ae2c(int param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_3[1];
  fVar2 = *(float *)(*(int *)(param_1 + 0x3c) * 0x1c + 0x94d0f0);
  *(undefined4 *)(param_1 + 8) = *param_3;
  fVar1 = fVar1 + fVar2;
  if (0.0 <= fVar1) {
    *(float *)(param_1 + 0xc) = fVar1;
  }
  else {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x30) * fVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 4);
  return;
}
