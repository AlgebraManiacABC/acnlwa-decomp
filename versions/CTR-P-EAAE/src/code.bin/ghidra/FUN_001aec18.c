/**
 * FUN_001aec18.c
 * Source line: 217341
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001aec18(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 1) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 1) | 1;
  }
  *(byte *)(param_1 + 1) = bVar1;
  return;
}
