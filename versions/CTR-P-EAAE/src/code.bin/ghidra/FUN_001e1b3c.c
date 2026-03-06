/**
 * FUN_001e1b3c.c
 * Source line: 247704
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001e1b3c(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x30) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x30) | 0x20;
  }
  *(byte *)(param_1 + 0x30) = bVar1;
  return;
}
