/**
 * FUN_005472b0.c
 * Source line: 789384
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined2 FUN_005472b0(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 local_20 [4];
  undefined *local_18;
  undefined4 local_14;
  
  FUN_0055c628();
  local_20[0] = 0;
  FUN_00546124(param_1,param_2);
  (**(code **)(iRam00af53d0 + 8))(0xaf53d0);
  local_14 = uRam00af53d4;
  local_18 = &DAT_009047f8;
  FUN_0080fb74(local_20,&local_18,0xffffffff);
  uVar1 = local_20[0];
  FUN_0055c650(0xaf57dc);
  return uVar1;
}
