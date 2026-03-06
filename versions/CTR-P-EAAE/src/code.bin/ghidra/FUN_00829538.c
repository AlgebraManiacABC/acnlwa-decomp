/**
 * FUN_00829538.c
 * Source line: 1236640
 * Body lines: 9
 */
#include "../../../include/types.h"

byte FUN_00829538(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 0x17) {
    bVar1 = *(byte *)(param_1 + ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1d)) >> 3)) >>
            (param_2 & 7) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
