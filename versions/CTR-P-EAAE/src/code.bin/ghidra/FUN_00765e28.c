/**
 * FUN_00765e28.c
 * Source line: 1124268
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_00765e28(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    uVar1 = FUN_005c2c80();
    return uVar1;
  }
  FUN_002ff8b0(*(undefined1 *)(param_1 + 0x1ac));
  iVar2 = FUN_0027ab40();
  return (uint)(iVar2 != 0);
}
