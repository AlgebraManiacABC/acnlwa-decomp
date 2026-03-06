/**
 * FUN_0027327c.c
 * Source line: 319871
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0027327c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + param_3 * 0xc + 0x4b8) + 0xc))();
  if (param_3 < 2) {
    iVar1 = param_1 + param_3 * 0x114 + 0x288;
  }
  else {
    iVar1 = param_1 + 0x60;
  }
  FUN_00537028(iVar1);
  if (param_3 < 2) {
    param_1 += param_3 * 0x114;
  }
  FUN_00537028(param_1 + 0x60);
  return 1;
}
