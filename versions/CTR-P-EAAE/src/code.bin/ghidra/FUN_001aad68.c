/**
 * FUN_001aad68.c
 * Source line: 215028
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001aad68(float param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (param_3 < 4) {
    FUN_004ee9a8(param_2 + param_3 * 0x18 + 0xe0);
    pbVar3 = (byte *)(param_2 + 200 + (param_3 >> 3));
    bVar2 = (byte)(1 << (param_3 & 7));
    bVar1 = *pbVar3 & ~bVar2;
    *pbVar3 = bVar1;
    if (param_1 < 0.0) {
      *pbVar3 = bVar2 | bVar1;
    }
    return;
  }
  return;
}
