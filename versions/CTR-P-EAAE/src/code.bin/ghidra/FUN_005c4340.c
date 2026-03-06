/**
 * FUN_005c4340.c
 * Source line: 873688
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005c4340(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_00aadad5;
  DAT_00aadad5 &= 0xfb;
  if (((int)(uVar2 << 0x1d) < 0 && param_1 != 0) && (iVar1 = FUN_005c33d0(4,0), iVar1 != 0)) {
    *(short *)(iVar1 + 0x5be) = (short)param_1;
  }
  return;
}
