/**
 * FUN_0030b90c.c
 * Source line: 409653
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0030b90c(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 8) {
    bVar1 = *(byte *)(param_1 + 0x24) >> (param_2 & 0xff) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
