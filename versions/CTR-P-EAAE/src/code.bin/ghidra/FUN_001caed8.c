/**
 * FUN_001caed8.c
 * Source line: 232880
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001caed8(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (0xe < iVar1) {
    fVar2 = *(float *)(param_1 + 0x40) +
            -*(float *)(param_1 + 0x40) * (float)(longlong)(iVar1 + -0xf) * 0.055555556;
    *(float *)(param_1 + 0x24) = fVar2;
    *(float *)(param_1 + 0x28) = fVar2;
    *(float *)(param_1 + 0x2c) = fVar2;
  }
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  FUN_0070dda0(0x3f800000,param_1,param_1 + 0xc);
  FUN_001c98d8(param_1);
  FUN_001c9df0(param_1);
  return;
}
