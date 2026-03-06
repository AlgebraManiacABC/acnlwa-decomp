/**
 * FUN_005aa038.c
 * Source line: 856593
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005aa038(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (0 < (int)param_1[2]) {
    uVar1 = FUN_005a4e5c(param_1[2],0,param_3,param_4,param_4);
    param_1[9] = uVar1;
    if (param_1[8] == 0) {
      uVar1 = FUN_005a4e5c(param_1[2],0xffff);
      param_1[10] = uVar1;
      uVar1 = (**(code **)**(undefined4 **)*param_1)(*(undefined4 **)*param_1,uVar1,0x20);
      param_1[8] = uVar1;
    }
    FUN_005a4e70(param_1 + 0xb,param_1[8],param_1[9],param_1[2],0);
  }
  return;
}
