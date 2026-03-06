/**
 * FUN_0053cd54.c
 * Source line: 782151
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0053cd54(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_00538188();
  uVar2 = param_2 + 3U & 0xfffffffc;
  if (uVar2 < 0xa5) {
    FUN_00538274(0xae70c0);
    return 0;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_0053cef0(param_1,param_3,0,param_1,uVar2,1,param_4);
  }
  FUN_0053c7b8(uVar1);
  FUN_00538274(0xae70c0);
  return uVar1;
}
