/**
 * FUN_00736b18.c
 * Source line: 1092044
 * Body lines: 4
 */
#include "../../../include/types.h"

uint FUN_00736b18(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return uVar1 << 0x18 | ((uVar1 << 0x10) >> 0x18) << 0x10 | ((uVar1 << 8) >> 0x18) << 8 |
         uVar1 >> 0x18;
}
