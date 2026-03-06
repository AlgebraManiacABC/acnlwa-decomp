/**
 * FUN_001df650.c
 * Source line: 245863
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001df650(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 6) & 0x7f;
  }
  else {
    bVar1 = *(byte *)(param_1 + 6) | 0x80;
  }
  *(byte *)(param_1 + 6) = bVar1;
  return;
}
