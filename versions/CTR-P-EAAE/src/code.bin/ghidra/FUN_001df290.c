/**
 * FUN_001df290.c
 * Source line: 245663
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001df290(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0027ab40(param_2);
  if (iVar1 != 0) {
    FUN_006f5204(param_1 + (short)param_2 * 0x1b88 + 0x2058);
    FUN_006ccfb0(param_1 + param_2 * 0x5a0 + 0x8e78);
    FUN_002e9d08();
    iVar1 = param_1 + 0x17450 + param_2 * 0x2c;
    FUN_00615508(iVar1 + 0xca8);
    FUN_00615534(iVar1 + 0xcb8);
    *(undefined1 *)(iVar1 + 0xcce) = 0;
    *(undefined1 *)(iVar1 + 0xccf) = 0;
    *(undefined4 *)(iVar1 + 0xcd0) = 0;
    return;
  }
  return;
}
