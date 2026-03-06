/**
 * FUN_0023cff4.c
 * Source line: 292806
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0023cff4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + param_3 * 0xc + 0x4c4) + 0xc))();
  iVar1 = param_1;
  if (param_3 < 2) {
    iVar1 = param_1 + param_3 * 0x114;
  }
  FUN_00537028(iVar1 + 0x6c);
  if (param_3 < 2) {
    param_1 = param_1 + param_3 * 0x114 + 0x294;
  }
  else {
    param_1 += 0x6c;
  }
  FUN_00537028(param_1);
  return 1;
}
