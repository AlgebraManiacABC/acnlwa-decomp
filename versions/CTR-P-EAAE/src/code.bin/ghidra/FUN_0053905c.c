/**
 * FUN_0053905c.c
 * Source line: 779985
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0053905c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char local_20 [8];
  undefined *local_18;
  undefined4 local_14;
  
  FUN_0053b3b8();
  local_20[0] = '\0';
  FUN_005385e8(param_1,param_2);
  (**(code **)(iRam00af70a8 + 8))(0xaf70a8);
  local_14 = uRam00af70ac;
  local_18 = &UNK_009039e0;
  FUN_0080d8b0(local_20,&local_18,0xffffffff);
  iVar1 = (int)local_20[0];
  FUN_0053b3e0(0xaf74b4);
  return iVar1;
}
