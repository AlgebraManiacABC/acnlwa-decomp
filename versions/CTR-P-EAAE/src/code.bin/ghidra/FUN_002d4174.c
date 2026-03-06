/**
 * FUN_002d4174.c
 * Source line: 372550
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002d4174(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < 4) {
    pbVar1 = (byte *)(param_1 + param_2 + 0x7dd2);
    *pbVar1 = *pbVar1 & 0xf3;
  }
  return;
}
