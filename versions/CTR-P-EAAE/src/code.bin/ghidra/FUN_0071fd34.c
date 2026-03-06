/**
 * FUN_0071fd34.c
 * Source line: 1077244
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_0071fd34(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_002ff8b0(4);
  if (uVar1 < 4) {
    uVar1 = (*(byte *)(uVar1 + param_1 + 0x7dd2) & 2) >> 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
