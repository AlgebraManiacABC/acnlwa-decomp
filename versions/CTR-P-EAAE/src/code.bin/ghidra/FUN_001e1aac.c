/**
 * FUN_001e1aac.c
 * Source line: 247670
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001e1aac(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb) | 8;
  }
  *(byte *)(param_1 + 0xb) = bVar1;
  return;
}
