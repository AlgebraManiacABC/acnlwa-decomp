/**
 * FUN_007622f0.c
 * Source line: 1121311
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_007622f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_005d43f4(param_2,param_1 + 0x14);
  if (param_4 != 0) {
    uVar1 = FUN_006c5c60(param_2,0);
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}
