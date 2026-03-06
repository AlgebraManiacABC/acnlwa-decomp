/**
 * FUN_006c8910.c
 * Source line: 1026255
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_006c8910(void)

{
  uint uVar1;
  
  uVar1 = FUN_006c5ad8();
  if (0xfe < uVar1) {
    uVar1 = 0;
  }
  return *(byte *)(uVar1 + 0x95dd1a) & 1;
}
