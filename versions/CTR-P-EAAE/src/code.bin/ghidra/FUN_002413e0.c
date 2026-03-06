/**
 * FUN_002413e0.c
 * Source line: 294871
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_002413e0(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_18 [8];
  uint local_10;
  
  FUN_0023fc84(auStack_18,param_1,param_2,1);
  local_10 &= 0xff;
  if (0xfb < local_10) {
    local_10 = 0xfc;
  }
  return local_10;
}
