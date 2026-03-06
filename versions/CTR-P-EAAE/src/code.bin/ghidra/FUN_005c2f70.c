/**
 * FUN_005c2f70.c
 * Source line: 872561
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005c2f70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    if (param_1 != 0) {
      FUN_0064d0b8(iVar1,0xf,0);
      return;
    }
    FUN_0064d0b8(iVar1,6,0);
    return;
  }
  return;
}
