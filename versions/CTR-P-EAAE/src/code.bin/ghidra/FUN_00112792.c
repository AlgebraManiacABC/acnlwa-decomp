/**
 * FUN_00112792.c
 * Source line: 113473
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_00112792(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 0x21) >> 7;
  }
  return bVar1;
}
