/**
 * FUN_0071fc90.c
 * Source line: 1077193
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0071fc90(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 4) {
    uVar1 = (*(byte *)(param_1 + param_2 + 0x7dd2) & 4) >> 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
