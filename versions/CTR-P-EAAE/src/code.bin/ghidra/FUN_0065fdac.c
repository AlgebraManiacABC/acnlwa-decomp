/**
 * FUN_0065fdac.c
 * Source line: 970325
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0065fdac(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 local_10;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    local_10 = param_4 & 0xffff0000;
    FUN_006540d8(param_1,local_10,0xf0);
    FUN_0064f368(param_1);
  }
  return;
}
