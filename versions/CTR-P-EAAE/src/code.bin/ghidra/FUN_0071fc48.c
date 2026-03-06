/**
 * FUN_0071fc48.c
 * Source line: 1077167
 * Body lines: 10
 */
#include "../../../include/types.h"

byte FUN_0071fc48(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = FUN_002ff8b0(4);
  if (uVar2 < 4) {
    bVar1 = *(byte *)(uVar2 + param_1 + 0x7dd2) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
