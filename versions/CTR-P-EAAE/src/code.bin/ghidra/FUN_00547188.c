/**
 * FUN_00547188.c
 * Source line: 789338
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00547188(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_20 [2];
  undefined *local_18;
  undefined4 local_14;
  
  FUN_0055c628();
  local_20[0] = 0;
  FUN_00546124(param_1,param_2);
  (**(code **)(iRam00af53d0 + 8))(0xaf53d0);
  local_14 = uRam00af53d4;
  local_18 = &DAT_009047f8;
  FUN_0080f40c(local_20,&local_18,0xffffffff);
  uVar1 = local_20[0];
  FUN_0055c650(0xaf57dc);
  return uVar1;
}
