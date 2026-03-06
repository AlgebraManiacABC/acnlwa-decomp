/**
 * FUN_00752a10.c
 * Source line: 1108929
 * Body lines: 13
 */
#include "../../../include/types.h"

FUN_00752a10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_5;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  FUN_0052eed0(auStack_28,&local_20,&local_18);
  uVar1 = FUN_007482d0(param_1 + 0x10,auStack_28);
  return uVar1;
}
