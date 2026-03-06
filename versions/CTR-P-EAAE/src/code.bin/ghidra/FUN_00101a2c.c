/**
 * FUN_00101a2c.c
 * Source line: 105494
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00101a2c(int param_1,int param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_002f7a2e(param_3,&local_18,param_4,&DAT_00101a95);
  if (param_2 != 0) {
    FUN_002f7c90(0,&local_18);
  }
  return uVar1;
}
