/**
 * FUN_0054d700.c
 * Source line: 792638
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0054d700(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_r3;
  
  uVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  FUN_0030f48c(param_2,"$SEAD_META_HEAP_%03d",
               (char *)((int)((1.0 - (float)uVar1 / (float)uVar2) * 10.0) * 10),extraout_r3);
  return;
}
