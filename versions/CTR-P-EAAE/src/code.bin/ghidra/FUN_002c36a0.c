/**
 * FUN_002c36a0.c
 * Source line: 363403
 * Body lines: 14
 */
#include "../../../include/types.h"

float FUN_002c36a0(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = 1.0;
  uVar1 = (uint)*(ushort *)(DAT_0094d764 + 0x28);
  fVar3 = (float)*(ushort *)(DAT_0094d764 + 0x2a);
  fVar5 = (float)uVar1 - (float)*(ushort *)(param_1 + 0x19e);
  fVar4 = 1.0 / (fVar3 * fVar3 - (float)(longlong)(int)(uVar1 * uVar1));
  if (fVar3 <= fVar5) {
    fVar2 = -((float)(longlong)(int)(uVar1 * uVar1) * fVar4) + fVar4 * fVar5 * fVar5;
  }
  return fVar2;
}
