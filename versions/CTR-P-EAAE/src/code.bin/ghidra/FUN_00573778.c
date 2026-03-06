/**
 * FUN_00573778.c
 * Source line: 818260
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_00573778(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_4 < 2) {
    uVar1 = FUN_007511bc(param_2);
    FUN_004ecd30(param_2 + 0x2c8,param_2 + 0x1b4,param_3,uVar1,0);
    FUN_004ee904(param_2 + 0x2c8,param_4);
    FUN_004ee9a8(param_1,param_2 + 0x2c8);
    FUN_004eda50(param_2 + 0x1b4,param_2 + 0x2c8);
  }
  return param_4 < 2;
}
