/**
 * FUN_0031756c.c
 * Source line: 418484
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0031756c(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 8) {
    bVar1 = *(byte *)(param_1 + (param_2 >> 3)) >> (param_2 & 7) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
