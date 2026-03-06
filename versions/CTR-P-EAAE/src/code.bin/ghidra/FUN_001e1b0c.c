/**
 * FUN_001e1b0c.c
 * Source line: 247687
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001e1b0c(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0xb) & 0xbf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb) | 0x40;
  }
  *(byte *)(param_1 + 0xb) = bVar1;
  return;
}
