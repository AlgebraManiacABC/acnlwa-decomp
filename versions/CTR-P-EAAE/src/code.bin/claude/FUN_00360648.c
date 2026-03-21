/**
 * FUN_00360648.c
 * Source line: 465089
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00360648(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_003619b0_00354bc4(0x68);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00355f34();
  }
  FUN_00354c34(uVar2,2);
  FUN_00355244(uVar2,param_2);
  FUN_003551f4(uVar2,param_3);
  return uVar2;
}
