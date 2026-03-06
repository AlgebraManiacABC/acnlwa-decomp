/**
 * FUN_00292dbc.c
 * Source line: 336171
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_00292dbc(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_00950712 != '\0') {
    uVar2 = (uint)DAT_00950713;
    bVar1 = (byte)param_1;
    if (param_1 == uVar2) {
      bVar1 = DAT_00950713;
    }
    DAT_00950713 = bVar1;
    return param_1 != uVar2;
  }
  DAT_00950712 = 1;
  DAT_00950713 = (byte)param_1;
  return true;
}
