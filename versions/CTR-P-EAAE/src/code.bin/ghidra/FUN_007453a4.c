/**
 * FUN_007453a4.c
 * Source line: 1101443
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_007453a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  
  iVar1 = FUN_00744df8(param_1,param_2,param_1,param_2);
  if (((iVar1 == 0) || (iVar1 = switchD_00543ff8::caseD_7(extraout_r2,extraout_r3), iVar1 == 0)) ||
     (iVar1 = FUN_007450c4(extraout_r2_00,extraout_r3_00), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
