/**
 * FUN_0030e5cc.c
 * Source line: 412944
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0030e5cc(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 0x1d) {
    bVar1 = *(byte *)(param_1 + (param_2 >> 3)) >> (param_2 & 7) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
