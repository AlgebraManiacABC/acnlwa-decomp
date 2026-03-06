/**
 * FUN_0011e6f4.c
 * Source line: 121481
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_0011e6f4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  
  FUN_001216ec(param_2,param_1);
  FUN_00121110(param_3);
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      FUN_00121304(*(undefined4 *)(param_1 + uVar1 * 4));
      FUN_001214f4(param_4,param_5,param_6,param_7);
      uVar1 += 1;
    } while (uVar1 < param_2);
  }
  return param_2;
}
