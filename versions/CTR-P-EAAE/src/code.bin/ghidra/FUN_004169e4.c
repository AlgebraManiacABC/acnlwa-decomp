/**
 * FUN_004169e4.c
 * Source line: 582181
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004169e4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int local_10;
  
  local_10 = param_4;
  FUN_007303e8(param_1,*(ushort *)(param_2 + 0xc) & 0xff);
  local_10 = FUN_00467748();
  if (local_10 == -0x375eec16) {
    uVar1 = 0xd8a14868;
  }
  else {
    uVar1 = FUN_0072f7c8(param_1,&local_10);
  }
  return uVar1;
}
