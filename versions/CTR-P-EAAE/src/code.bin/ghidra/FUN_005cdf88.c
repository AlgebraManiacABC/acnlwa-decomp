/**
 * FUN_005cdf88.c
 * Source line: 880302
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_005cdf88(void)

{
  uint uVar1;
  
  uVar1 = FUN_00315788();
  if (0xfe < uVar1) {
    uVar1 = 0;
  }
  return (*(byte *)(uVar1 + 0x95dd1a) & 8) >> 3;
}
