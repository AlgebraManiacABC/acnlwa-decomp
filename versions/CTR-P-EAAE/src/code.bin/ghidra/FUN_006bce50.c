/**
 * FUN_006bce50.c
 * Source line: 1018990
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006bce50(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  iVar1 = FUN_002fcb34(param_2);
  if ((iVar1 == 0x2c) && (uVar2 = FUN_002ffad8(param_2), (int)uVar2 < 0x43)) {
    if ((uint)((int)uVar2 >> 3) < 9) {
      pbVar3 = (byte *)(param_1 + ((int)uVar2 >> 3) + 0x8f6e);
      *pbVar3 = *pbVar3 | (byte)(1 << (uVar2 & 7));
    }
  }
  return;
}
