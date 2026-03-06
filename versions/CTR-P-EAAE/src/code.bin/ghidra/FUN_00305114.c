/**
 * FUN_00305114.c
 * Source line: 402921
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00305114(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0xb) & 0x7f;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb) | 0x80;
  }
  *(byte *)(param_1 + 0xb) = bVar1;
  return;
}
