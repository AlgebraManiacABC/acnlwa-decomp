/**
 * FUN_00712c38.c
 * Source line: 1068169
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_00712c38(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (0xf < bVar1) {
    bVar1 = 0;
  }
  return bVar1;
}
