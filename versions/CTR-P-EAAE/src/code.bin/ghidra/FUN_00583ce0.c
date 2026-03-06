/**
 * FUN_00583ce0.c
 * Source line: 830175
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00583ce0(void)

{
  uint uVar1;
  
  if (*(char *)(DAT_0094cd08 + 0x15) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(byte *)(DAT_0094cd08 + 0x1d) & 0x7f;
  }
  return uVar1;
}
