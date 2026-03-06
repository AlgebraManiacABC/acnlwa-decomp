/**
 * FUN_00712c08.c
 * Source line: 1068127
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_00712c08(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (0xb < bVar1) {
    bVar1 = 0;
  }
  return bVar1;
}
