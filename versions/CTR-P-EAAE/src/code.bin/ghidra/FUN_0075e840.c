/**
 * FUN_0075e840.c
 * Source line: 1118943
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0075e840(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 4) {
    bVar1 = *(byte *)(param_1 + 4) >> (param_2 & 0xff) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
