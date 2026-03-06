/**
 * FUN_001e1864.c
 * Source line: 247653
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001e1864(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x27) & 0x7f;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x27) | 0x80;
  }
  *(byte *)(param_1 + 0x27) = bVar1;
  return;
}
