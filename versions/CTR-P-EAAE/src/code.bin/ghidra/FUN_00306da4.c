/**
 * FUN_00306da4.c
 * Source line: 404787
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00306da4(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0xb) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb) | 0x20;
  }
  *(byte *)(param_1 + 0xb) = bVar1;
  return;
}
