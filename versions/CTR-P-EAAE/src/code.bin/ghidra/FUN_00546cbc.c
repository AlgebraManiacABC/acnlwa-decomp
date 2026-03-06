/**
 * FUN_00546cbc.c
 * Source line: 789154
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 FUN_00546cbc(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 local_20 [8];
  undefined *local_18;
  undefined4 local_14;
  
  FUN_0055c628();
  local_20[0] = 0;
  FUN_00546124(param_1,param_2);
  (**(code **)(iRam00af53d0 + 8))(0xaf53d0);
  local_14 = uRam00af53d4;
  local_18 = &DAT_009047f8;
  FUN_0080f244(local_20,&local_18,0xffffffff);
  uVar1 = local_20[0];
  FUN_0055c650(0xaf57dc);
  return uVar1;
}
