/**
 * FUN_005aa0b8.c
 * Source line: 856614
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005aa0b8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (0 < (int)param_1[2]) {
    uVar1 = FUN_005aa878();
    param_1[5] = uVar1;
    if (param_1[4] == 0) {
      uVar1 = (**(code **)**(undefined4 **)*param_1)(*(undefined4 **)*param_1,uVar1,0x20);
      param_1[4] = uVar1;
    }
    FUN_005aa884(param_1 + 6,param_1[4],param_1[5],param_1[2]);
    return;
  }
  return;
}
