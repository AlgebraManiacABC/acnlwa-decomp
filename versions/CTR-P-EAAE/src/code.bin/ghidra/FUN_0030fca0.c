/**
 * FUN_0030fca0.c
 * Source line: 413772
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0030fca0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  while (((9 < uVar1 || (uVar1 * 0x50 == -0xa82c58)) ||
         ((*(uint *)(uVar1 * 0x50 + 0xa82c9c) & 0x20) == 0))) {
    uVar1 += 1;
    if (9 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}
