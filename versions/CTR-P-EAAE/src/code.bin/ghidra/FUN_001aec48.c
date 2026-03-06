/**
 * FUN_001aec48.c
 * Source line: 217375
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001aec48(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *param_1 & 0x7f;
  }
  else {
    bVar1 = *param_1 | 0x80;
  }
  *param_1 = bVar1;
  return;
}
