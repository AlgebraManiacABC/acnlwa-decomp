/**
 * FUN_0073550c.c
 * Source line: 1090750
 * Body lines: 4
 */
#include "../../../include/types.h"

uint FUN_0073550c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
  return ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
         ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
}
