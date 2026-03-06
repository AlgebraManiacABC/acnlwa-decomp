/**
 * FUN_001b39d4.c
 * Source line: 220470
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 * FUN_001b39d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int local_18 [4];
  
  puVar1 = (undefined4 *)FUN_003083bc(local_18,param_1,0x15);
  *puVar1 = &DAT_0090aadc;
  (**(code **)(local_18[0] + 0x14))(local_18,param_2);
  return (undefined1 *)local_18;
}
