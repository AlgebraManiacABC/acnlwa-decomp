/**
 * FUN_00426cd8.c
 * Source line: 590650
 * Body lines: 4
 */
#include "../../../include/types.h"

uint FUN_00426cd8(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return (uint)*(byte *)((int)param_1 + 3) |
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8;
}
