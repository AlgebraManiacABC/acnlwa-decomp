/**
 * FUN_00729464.c
 * Source line: 1082479
 * Body lines: 3
 */
#include "../../../include/types.h"

uint FUN_00729464(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}
