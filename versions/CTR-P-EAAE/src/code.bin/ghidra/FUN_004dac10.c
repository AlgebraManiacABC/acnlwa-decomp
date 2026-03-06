/**
 * FUN_004dac10.c
 * Source line: 721667
 * Body lines: 13
 */
#include "../../../include/types.h"

float FUN_004dac10(int param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = (*(byte *)(param_1 + 0xb6) & 0xf) % 3;
  if (uVar1 == 0) {
    fVar2 = *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x48) * 0.5;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x8c);
    if (uVar1 == 2) {
      fVar2 = fVar2 - *(float *)(param_1 + 0x48) * 0.5;
    }
  }
  return fVar2 * 0.003125 * 2.0;
}
