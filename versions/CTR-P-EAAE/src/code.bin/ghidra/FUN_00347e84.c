/**
 * FUN_00347e84.c
 * Source line: 444711
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00347e84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 local_18;
  
  local_18 = param_4;
  if (param_1[1] != 0) {
    local_18 = FUN_00725d08(param_1);
    FUN_00348f00(&local_18);
  }
  (**(code **)(*param_1 + 0x34))(param_1);
  FUN_00135748(0xae0c70);
  *param_1 = (int)piRam00ae0c64;
  iRam00ae0c6c += -1;
  piRam00ae0c64 = param_1;
  FUN_001357ec(0xae0c70,extraout_r1,extraout_r2,local_18);
  return;
}
