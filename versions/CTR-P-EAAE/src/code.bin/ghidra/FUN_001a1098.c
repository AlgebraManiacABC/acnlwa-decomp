/**
 * FUN_001a1098.c
 * Source line: 209497
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001a1098(int param_1)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 4) + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x14);
  fVar1 = (float)FUN_0047df24(*(undefined2 *)(param_1 + 0x1c));
  fVar1 = fVar1 * *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_0047df5c(*(undefined2 *)(param_1 + 0x1e));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x24) + fVar1 * fVar2;
  fVar2 = (float)FUN_0047df5c(*(undefined2 *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x20) * fVar2;
  fVar2 = (float)FUN_0047df24(*(undefined2 *)(param_1 + 0x1e));
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x2c) + fVar1 * fVar2;
  return;
}
