/**
 * FUN_001e5df4.c
 * Source line: 248368
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001e5df4(undefined1 *param_1)

{
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_001e58fc(&local_18);
  local_20[0] = 0xff;
  FUN_005601b8(local_18,uStack_14,uStack_10,uStack_c,local_20);
  param_1[1] = (char)((uint)local_20[0] >> 8);
  param_1[2] = (char)((uint)local_20[0] >> 0x10);
  *param_1 = (char)local_20[0];
  param_1[3] = (char)((uint)local_20[0] >> 0x18);
  return;
}
