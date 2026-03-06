/**
 * FUN_0067de10.c
 * Source line: 985561
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0067de10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0070ae20(param_1 + 0x1b4);
  iVar2 = FUN_0070ab24(param_1 + 0x1b4,uVar1);
  if (iVar2 == 0) {
    return;
  }
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    iVar2 = FUN_00656c20(param_1);
    FUN_005d4180(0x41200000,iVar2 + 0xe);
    FUN_0064d0b8(param_1,0xaa,iVar2,0);
    return;
  }
  FUN_00656e5c(param_1);
  return;
}
