/**
 * FUN_00256194.c
 * Source line: 305772
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00256194(int *param_1)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_00521a18();
  FUN_001e58fc(&local_20,4);
  param_1[0x11] = local_20;
  param_1[0x12] = local_1c;
  param_1[0x13] = local_18;
  param_1[0x14] = local_14;
  FUN_004ec7ec(param_1 + 6,param_1 + 0x11);
  (**(code **)(*param_1 + 0x4c))(param_1);
  FUN_004ee4b4(param_1 + 6);
  return 2;
}
