/**
 * FUN_001b5d94.c
 * Source line: 221785
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_001b5d94(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = NUM_VILLAGERS;
  if ((uint)(NUM_VILLAGERS - 1) < param_1) {
    uVar2 = param_1 - 0x1000;
  }
  if (((uint)(NUM_VILLAGERS - 1) < param_1 && 0xf < uVar2) && (0x10 < param_1 - 0x2000)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
