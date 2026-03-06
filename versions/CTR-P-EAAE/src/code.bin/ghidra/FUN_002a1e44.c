/**
 * FUN_002a1e44.c
 * Source line: 343406
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_002a1e44(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + param_3 * 0xc + 0x490) + 0xc))();
  if (param_3 < 2) {
    iVar1 = param_1 + param_3 * 0x114 + 0x260;
  }
  else {
    iVar1 = param_1 + 0x38;
  }
  FUN_00537028(iVar1);
  if (param_3 < 2) {
    param_1 += param_3 * 0x114;
  }
  FUN_00537028(param_1 + 0x38);
  return 1;
}
