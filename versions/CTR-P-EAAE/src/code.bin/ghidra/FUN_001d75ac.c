/**
 * FUN_001d75ac.c
 * Source line: 240082
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001d75ac(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r1;
  int local_10;
  
  if (*(char *)(param_1 + 0xc) == '\n') {
    local_10 = param_4;
    FUN_004c331c(&local_10,param_1 + 0x10);
    if (local_10 == 0) {
      FUN_00130ed8(&local_10,extraout_r1);
      return;
    }
    FUN_004c7404();
    FUN_001b0544(0x3f800000,param_1 + 0x1c,0x28);
    FUN_00130ed8(&local_10);
  }
  return;
}
