/**
 * FUN_00350454.c
 * Source line: 452009
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00350454(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  
  if (param_3 != 0) {
    uVar1 = FUN_00350498(auStack_18,param_2 + 0x20);
    FUN_003081b4(param_3,uVar1);
  }
  if (param_2 == -0x20) {
    FUN_007795ac();
  }
  else {
    FUN_003081b4();
  }
  return param_1;
}
