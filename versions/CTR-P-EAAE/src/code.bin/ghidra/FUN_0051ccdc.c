/**
 * FUN_0051ccdc.c
 * Source line: 761849
 * Body lines: 9
 */
#include "../../../include/types.h"

byte FUN_0051ccdc(uint param_1)

{
  byte bVar1;
  
  if (param_1 < 10) {
    bVar1 = (byte)(&DAT_00a833a1)[(int)(param_1 + ((uint)((int)param_1 >> 0x1f) >> 0x1d)) >> 3] >>
            (param_1 & 7) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
