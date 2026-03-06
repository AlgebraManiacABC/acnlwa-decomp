/**
 * FUN_00656d3c.c
 * Source line: 965557
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00656d3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 0x8c5) << 0x1a) < 0) {
    iVar1 = FUN_0070acf8(param_1 + 0x1b4,0);
    if (iVar1 == 1) {
      uVar2 = FUN_0070acac(param_1 + 0x1b4,0);
      FUN_0068db1c(uVar2,0x3f800000,0x40000000,0x40c00000,0x40c00000,param_1,0xd0,1,0,1);
    }
    else {
      FUN_0068db1c(0,0x3f800000,0x40e00000,0x40c00000,0x40c00000,param_1,0xd0,1,0,1);
    }
  }
  FUN_0068db1c(0,0x3f800000,0x41000000,0x40c00000,0x40c00000,param_1,0x17,1,0,1);
  return;
}
