/**
 * FUN_0054240c.c
 * Source line: 786049
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0054240c(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_28 [24];
  
  FUN_00561ba4(auStack_28);
  (**(code **)(*param_1 + 0x38))(param_1,param_2);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  (**(code **)(*param_1 + 0x3c))(param_1,param_2,*param_3,param_3[1]);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3 + 2,param_3[4]);
  return;
}
