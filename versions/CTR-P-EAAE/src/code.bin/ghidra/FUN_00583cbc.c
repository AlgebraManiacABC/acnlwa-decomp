/**
 * FUN_00583cbc.c
 * Source line: 830135
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00583cbc(void)

{
  uint uVar1;
  
  if (*(char *)(DAT_0094cd08 + 0x15) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(byte *)(DAT_0094cd08 + 0x1c) & 0x7f;
  }
  return uVar1;
}
