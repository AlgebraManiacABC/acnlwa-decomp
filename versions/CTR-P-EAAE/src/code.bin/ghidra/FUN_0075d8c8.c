/**
 * FUN_0075d8c8.c
 * Source line: 1117991
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_0075d8c8(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0x1c);
  fVar1 = *(float *)(param_1 + 4) - *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_1 + 0x1c);
  if (0.0 < *(float *)(param_2 + 0x40)) {
    fVar2 = *(float *)(param_2 + 0x40) + fVar2;
  }
  return SQRT(fVar1 * fVar1 + fVar3 * fVar3) < fVar2;
}
