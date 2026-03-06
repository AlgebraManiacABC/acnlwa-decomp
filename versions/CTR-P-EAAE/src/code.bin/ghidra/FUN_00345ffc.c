/**
 * FUN_00345ffc.c
 * Source line: 442974
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00345ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined1 auStack_28 [12];
  undefined4 local_1c [2];
  
  FUN_001289ac(auStack_28,1,param_1,param_2);
  local_1c[0] = uRam00974f10;
  uVar1 = FUN_00348a88(local_1c,auStack_28,param_5,param_6,0xffffffff,0xffffffff,param_3,param_4);
  if ((((uVar1 & 0x3fc00) == 0x4400) && (0xdb < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xe6)) {
    uVar1 = 0xc8804482;
  }
  return uVar1;
}
