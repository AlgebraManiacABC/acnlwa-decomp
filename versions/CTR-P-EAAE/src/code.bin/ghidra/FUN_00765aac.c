/**
 * FUN_00765aac.c
 * Source line: 1124153
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00765aac(int param_1,undefined4 *param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  uStack_18 = param_2[2];
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x8c7) << 0x1e)) {
    fVar1 = (float)FUN_006e56a4();
    FUN_005d43f4(-fVar1,&local_20,param_2,param_3);
    local_1c = FUN_006c5c60(&local_20,0);
  }
  FUN_004e5288(&local_20,param_3);
  return;
}
