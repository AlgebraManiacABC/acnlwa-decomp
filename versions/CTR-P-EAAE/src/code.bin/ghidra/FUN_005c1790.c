/**
 * FUN_005c1790.c
 * Source line: 870988
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005c1790(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 < 4) {
    param_1 &= 3;
  }
  else {
    param_1 = FUN_00305f44();
  }
  if (param_1 < 4) {
    FUN_00653724(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}
