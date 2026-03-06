/**
 * FUN_001ca2c0.c
 * Source line: 232444
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_001ca2c0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (-1 < iVar1) {
    if (9 < iVar1) {
      return 1;
    }
    fVar2 = *(float *)(param_1 + 0x40) +
            -*(float *)(param_1 + 0x40) * (float)(longlong)iVar1 * 0.11111111;
    *(float *)(param_1 + 0x24) = fVar2;
    *(float *)(param_1 + 0x28) = fVar2;
    *(float *)(param_1 + 0x2c) = fVar2;
  }
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  return 0;
}
