/**
 * FUN_0013fe38.c
 * Source line: 152398
 * Body lines: 9
 */
#include "../../../include/types.h"

FUN_0013fe38(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_2 == NULL || param_5 == 0) {
    uVar1 = 0xe0e046bc;
  }
  else {
    FUN_00142964(1);
    uVar1 = (**(code **)*param_2)(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}
