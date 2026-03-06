/**
 * FUN_006693b0.c
 * Source line: 975069
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006693b0(int param_1)

{
  float fVar1;
  undefined1 auStack_18 [16];
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_00759a54(auStack_18,param_1 + 0x8ca);
    fVar1 = (float)FUN_0074fe34(param_1 + 0x14,auStack_18);
    fVar1 = (SQRT(fVar1) / 32.0) * 50.0 * 0.5;
    *(ushort *)(param_1 + 0x5dc) = (ushort)(0.0 < fVar1) * (short)(int)fVar1 + 0x1e;
  }
  return;
}
