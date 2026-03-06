/**
 * FUN_004c9904.c
 * Source line: 709062
 * Body lines: 13
 */
#include "../../../include/types.h"

float FUN_004c9904(float param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 2.0;
  fVar1 = fVar2;
  if ((param_1 <= 2.0) && (fVar1 = param_1, param_1 < 0.0)) {
    fVar1 = 0.0;
  }
  fVar1 = *(float *)(*(int *)((uint)*param_2 * 4 + 0x97e674) + (int)(fVar1 * 0.5 * 256.0 + 0.5) * 4)
  ;
  if ((fVar1 <= 2.0) && (fVar2 = fVar1, fVar1 < 0.0)) {
    fVar2 = 0.0;
  }
  return fVar2;
}
