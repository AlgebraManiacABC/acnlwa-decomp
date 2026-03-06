/**
 * FUN_0045f0e4.c
 * Source line: 627053
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0045f0e4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    iVar2 = FUN_00427dec(param_3);
    uVar1 = 0;
    if (iVar2 != 0) {
      FUN_0045ef20(param_1,1,param_2,param_3,param_4,1);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
