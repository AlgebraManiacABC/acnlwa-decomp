/**
 * FUN_00201fa0.c
 * Source line: 261781
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00201fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_002fd108(0x38,param_1,4);
  iVar1 = FUN_005819ec();
  if ((iVar1 != 0) && (iVar2 = FUN_005814d0(iVar1,param_1,param_2,param_3), iVar2 == 0)) {
    FUN_005817f0(iVar1);
    iVar1 = 0;
  }
  return iVar1;
}
