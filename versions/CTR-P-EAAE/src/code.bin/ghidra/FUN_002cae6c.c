/**
 * FUN_002cae6c.c
 * Source line: 366639
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002cae6c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_2 + 0x48);
  fVar4 = *(float *)(param_2 + 0x4c);
  fVar1 = *(float *)(param_2 + 0x8c);
  fVar2 = *(float *)(param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x13c) = 1;
  *(float *)(param_1 + 0x140) = 160.0 - (fVar1 + fVar3 * 0.5);
  *(float *)(param_1 + 0x144) = (fVar2 - fVar4 * 0.5) + 120.0;
  *(float *)(param_1 + 0x148) = fVar3;
  *(float *)(param_1 + 0x14c) = fVar4;
  return;
}
