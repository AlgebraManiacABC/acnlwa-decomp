/**
 * FUN_0071e9e8.c
 * Source line: 1076117
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0071e9e8(byte *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (2 < ((uint)*param_1 << 0x1a) >> 0x1c) {
    iVar1 = FUN_002fc900(0);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_00305f44(iVar1);
      iVar1 = (int)(char)param_1[iVar1 + 0x34];
    }
  }
  return iVar1;
}
