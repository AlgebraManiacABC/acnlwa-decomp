/**
 * FUN_002d4240.c
 * Source line: 372596
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002d4240(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = FUN_002ff8b0(4);
  if (uVar1 < 4) {
    pbVar2 = (byte *)(uVar1 + param_1 + 0x7dd2);
    *pbVar2 = *pbVar2 & 0xfc;
  }
  return;
}
