/**
 * FUN_001eb610.c
 * Source line: 252086
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001eb610(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_0027d3cc();
  iVar2 = (uint)(*pbVar1 >> 7) + (pbVar1[1] & 7) * 2;
  if (*(int *)(param_1 + 400) != iVar2) {
    if (*(int *)(param_1 + 400) == 7 && iVar2 == 9) {
      FUN_002d596c(param_1 + 0x11c,param_1 + 0x6c);
      FUN_002e8cc8(param_1 + 0x11c,0x100061f);
    }
    FUN_007c7834(param_1 + 0x18c,iVar2);
    *(float *)(param_1 + 0x48) = (float)(((uint)(pbVar1[1] >> 3) + (pbVar1[2] & 0x1f) * 0x20) * 4);
    *(float *)(param_1 + 0x50) = (float)(((uint)(pbVar1[2] >> 5) + (pbVar1[3] & 0x7f) * 8) * 4);
    *(byte *)(param_1 + 0x117) = (byte)(((uint)pbVar1[5] << 0x1a) >> 0x1c);
  }
  return;
}
