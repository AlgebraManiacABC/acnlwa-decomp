/**
 * FUN_005ce300.c
 * Source line: 880456
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_005ce300(void)

{
  uint uVar1;
  
  uVar1 = FUN_00315788();
  if (0xfe < uVar1) {
    uVar1 = 0;
  }
  return *(byte *)(uVar1 + 0x95dd1a) & 1;
}
