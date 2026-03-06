/**
 * FUN_0064f508.c
 * Source line: 961262
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0064f508(undefined4 param_1,int param_2,int param_3)

{
  float local_28;
  undefined4 local_24;
  float fStack_20;
  short local_1c;
  
  if (param_3 != 0) {
    FUN_0064ccc4(param_1,param_2 + 0x14);
    return;
  }
  local_1c = *(short *)(param_2 + 0x8be);
  fStack_20 = (float)(longlong)(int)*(short *)(param_2 + 0x8c0) * 0.25;
  local_28 = (float)(longlong)(int)local_1c * 0.25;
  local_24 = 0;
  local_24 = FUN_006c5c60(&local_28,0);
  FUN_0064ccc4(param_1,param_2 + 0x14,&local_28);
  return;
}
