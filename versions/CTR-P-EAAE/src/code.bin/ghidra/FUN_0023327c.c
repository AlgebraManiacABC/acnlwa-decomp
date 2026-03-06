/**
 * FUN_0023327c.c
 * Source line: 287199
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0023327c(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  local_10[0] = 0x23;
  bVar1 = param_3 < 6;
  if (bVar1) {
    param_3 = param_3 << 0x18 | 0x40000;
  }
  local_c = 0x40000;
  if (bVar1) {
    local_c = param_3;
  }
  FUN_0023623c(param_1,param_2,local_10,param_5);
  return;
}
