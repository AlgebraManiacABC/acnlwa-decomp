/**
 * FUN_004c9cdc.c
 * Source line: 709278
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004c9cdc(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = param_1 + 1.0;
  if (param_1 + 1.0 < 0.0) {
    fVar1 = 0.0;
  }
  if (*(float *)(param_2 + 0x44) != fVar1) {
    *(float *)(param_2 + 0x44) = fVar1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
