/**
 * FUN_004bb680.c
 * Source line: 698356
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004bb680(int *param_1,undefined4 param_2)

{
  undefined8 local_18;
  
  if (param_1[0x4f] != 0) {
    (**(code **)(*param_1 + 0x6c))(param_1);
    (**(code **)(*(int *)param_1[0x4f] + 0x28))
              ((int *)param_1[0x4f],param_2,*(undefined1 *)((int)param_1 + 0xb5),1);
    local_18 = FUN_0073c16c(param_1);
    FUN_004bed0c(param_2,&local_18,param_1 + 0x12,*(undefined1 *)((int)param_1 + 0x151),
                 param_1[0x55],param_1 + 0x50);
  }
  return;
}
