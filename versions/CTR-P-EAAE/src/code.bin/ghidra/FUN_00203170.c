/**
 * FUN_00203170.c
 * Source line: 262435
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00203170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_002fd108(0x38,param_1,4,param_4,param_4);
  iVar1 = FUN_005819ec();
  if (iVar1 != 0) {
    iVar2 = FUN_005812ec(iVar1,param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      FUN_005817f0(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}
