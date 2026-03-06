/**
 * FUN_00137d88.c
 * Source line: 144504
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00137d88(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (0 < param_2) {
    uVar1 = FUN_00131280(param_2 * 4,param_3,4);
    *param_1 = uVar1;
    FUN_0013cbdc(param_1 + 1,uVar1,param_2);
    return;
  }
  return;
}
