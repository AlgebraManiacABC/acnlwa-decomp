/**
 * FUN_0023321c.c
 * Source line: 287181
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0023321c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = param_3 != 0 | 0x20000;
  local_18[0] = 0x17;
  if (param_4 < 6) {
    local_14 = param_3 != 0 | 0x20000 | param_4 << 0x18;
  }
  FUN_0023623c(param_1,param_2,local_18,param_6);
  return;
}
