/**
 * FUN_0065141c.c
 * Source line: 962365
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0065141c(undefined4 param_1,int param_2)

{
  if ((int)((uint)*(byte *)(param_2 + 0x8c5) << 0x1a) < 0) {
    FUN_0068db1c(0,0x3f800000,param_1,param_1,param_1,param_2,0xcb,1,0,1);
    return;
  }
  if ((*(byte *)(param_2 + 0x8c7) & 1) != 0) {
    FUN_00656e5c();
    return;
  }
  FUN_0064dc88();
  return;
}
