/**
 * thunk_FUN_00829560.c
 * Source line: 401055
 * Body lines: 9
 */
#include "../../../include/types.h"

byte thunk_FUN_00829560(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 0x1c) {
    bVar1 = *(byte *)(param_1 + ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1d)) >> 3)) >>
            (param_2 & 7) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
