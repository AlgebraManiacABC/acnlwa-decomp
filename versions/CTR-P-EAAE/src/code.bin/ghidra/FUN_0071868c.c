/**
 * FUN_0071868c.c
 * Source line: 1071533
 * Body lines: 5
 */
#include "../../../include/types.h"

bool FUN_0071868c(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1c);
  return fVar1 * fVar1 + fVar2 * fVar2 <= *(float *)(param_1 + 0x114);
}
