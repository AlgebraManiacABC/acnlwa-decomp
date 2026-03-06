/**
 * FUN_001fdebc.c
 * Source line: 260177
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 * FUN_001fdebc(undefined1 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_20 [4];
  
  uVar1 = uRam0099306c;
  uRam00950124 = param_1;
  (**(code **)(iRam00993064 + 8))(0x993064);
  FUN_003083bc(local_20,uRam00993068,uVar1);
  (**(code **)(local_20[0] + 0x14))(local_20,param_2);
  return (undefined1 *)local_20;
}
