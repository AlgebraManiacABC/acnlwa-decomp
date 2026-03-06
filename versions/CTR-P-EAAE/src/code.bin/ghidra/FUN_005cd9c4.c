/**
 * FUN_005cd9c4.c
 * Source line: 880038
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005cd9c4(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 < 0x51) {
    puVar1 = (uint *)(param_1 + (param_2 >> 5) * 4 + 0x44b0);
    *puVar1 = 1 << (param_2 & 0x1f) | *puVar1;
  }
  return;
}
