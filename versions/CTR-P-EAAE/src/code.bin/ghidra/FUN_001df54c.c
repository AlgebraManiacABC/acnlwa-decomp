/**
 * FUN_001df54c.c
 * Source line: 245805
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001df54c(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *param_1 & 0xbf;
  }
  else {
    bVar1 = *param_1 | 0x40;
  }
  *param_1 = bVar1;
  return;
}
