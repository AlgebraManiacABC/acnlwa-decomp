/**
 * FUN_00248d34.c
 * Source line: 297969
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00248d34(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  
  FUN_0052ee54(&local_18,param_3);
  iVar1 = FUN_006cacdc(param_4);
  if ((((iVar1 == 0) && (iVar1 = FUN_006cac2c(param_4), iVar1 == 0)) &&
      (iVar1 = FUN_006cac70(param_4), iVar1 == 0)) && ((param_4 != 0x4e && (param_4 != 0xc6)))) {
    local_14 += -1;
  }
  else {
    local_14 += -2;
  }
  *param_1 = local_18;
  *param_2 = local_14;
  return 1;
}
