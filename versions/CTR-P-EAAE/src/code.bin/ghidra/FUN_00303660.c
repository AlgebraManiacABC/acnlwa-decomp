/**
 * FUN_00303660.c
 * Source line: 400681
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00303660(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  if ((uint)*(byte *)((int)param_1 + 7) ==
      ((uVar1 >> 0x10) + (uVar1 >> 8) + uVar1 + (uVar1 >> 0x18) + 0xba & 0xff)) {
    uVar3 = _ll_shift_l(uVar1,0,0x1c - (uint)*(byte *)((int)param_1 + 6));
    iVar2 = ((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20)) - ((ushort)param_1[1] + 0x8f187432);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
