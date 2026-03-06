/**
 * FUN_003036dc.c
 * Source line: 400723
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_003036dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined1 auStack_20 [12];
  
  local_28 = FUN_0056be20(param_2);
  FUN_007795ac(auStack_20);
  FUN_003081b4(auStack_20,&local_28);
  uVar2 = FUN_00759664(auStack_20);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28._0_4_ = param_3;
  local_28._4_4_ = param_4;
  FUN_007593ec(param_1,uVar1,(int)uVar2,uVar1);
  return;
}
