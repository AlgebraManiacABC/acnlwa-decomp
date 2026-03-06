/**
 * FUN_0010247c.c
 * Source line: 105963
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0010247c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = uRam00af75c8;
  FUN_002f8198(0xaf74dc);
  FUN_002f8198(0xaf752c);
  FUN_002f8198(0xaf757c);
  while (uVar2 = uVar1 & 0xfffffffe, uVar2 != 0) {
    uVar1 = *(uint *)(uVar2 + 0x4c);
    FUN_002f8198(uVar2);
    FUN_002f83b0(uVar2);
  }
  return;
}
