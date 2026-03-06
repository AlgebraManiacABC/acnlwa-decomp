/**
 * FUN_002a7270.c
 * Source line: 346602
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002a7270(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (((uint)*(byte *)(param_1 + 0x60) & 1 << (uVar1 & 0xff) & 0xffU) != 0) {
      FUN_002fae84();
      return;
    }
    uVar1 += 1;
  } while (uVar1 < 4);
  return;
}
