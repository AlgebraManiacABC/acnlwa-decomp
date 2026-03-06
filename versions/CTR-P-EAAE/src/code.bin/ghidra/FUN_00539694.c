/**
 * FUN_00539694.c
 * Source line: 780236
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined2 FUN_00539694(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 local_20 [4];
  undefined *local_18;
  undefined4 local_14;
  
  FUN_0053b3b8();
  local_20[0] = 0;
  FUN_005385e8(param_1,param_2);
  (**(code **)(iRam00af70a8 + 8))(0xaf70a8);
  local_14 = uRam00af70ac;
  local_18 = &UNK_009039e0;
  FUN_0080e600(local_20,&local_18,0xffffffff);
  uVar1 = local_20[0];
  FUN_0053b3e0(0xaf74b4);
  return uVar1;
}
