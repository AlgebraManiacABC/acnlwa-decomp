/**
 * FUN_00463200.c
 * Source line: 630350
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00463200(float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = param_1;
  }
  *(float *)(param_2 + 0x1c) = fVar2;
  iVar1 = *(int *)(param_2 + 0x68);
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  *(float *)(iVar1 + 0x24) = param_1;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 2;
  return;
}
