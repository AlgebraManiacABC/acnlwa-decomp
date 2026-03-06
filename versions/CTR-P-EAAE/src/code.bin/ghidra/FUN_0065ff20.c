/**
 * FUN_0065ff20.c
 * Source line: 970382
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0065ff20(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x171) << 0x1a)) {
    return;
  }
  if (param_2 != 0xd && param_2 != 0x20) {
    FUN_0064f368(param_1);
  }
  local_10 = param_4 & 0xffff0000;
  FUN_006540d8(param_1,local_10,0x78,local_10);
  return;
}
