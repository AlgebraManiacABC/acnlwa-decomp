/**
 * FUN_00684ef0.c
 * Source line: 988932
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00684ef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x8ca);
  if (bVar1 == 0) {
    local_10 = 0xf;
    FUN_0068db1c(0,0x3f800000,0x41000000,0x40c00000,0x40c00000,param_1,0xb2,0);
  }
  else {
    FUN_00656e5c((float)bVar1,param_1);
    *(ushort *)(param_1 + 0x5c0) = (ushort)bVar1;
    local_10 = param_4;
  }
  FUN_0068dc14(param_1,0x1000547,0,local_10);
  return;
}
