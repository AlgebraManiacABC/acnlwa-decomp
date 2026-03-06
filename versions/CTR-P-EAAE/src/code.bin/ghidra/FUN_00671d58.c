/**
 * FUN_00671d58.c
 * Source line: 979577
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00671d58(int param_1,undefined4 param_2,int param_3)

{
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xf7;
  FUN_002e6368(param_1 + 0x9e8);
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_00316efc(param_3 + 0xb,5,0);
    FUN_00316efc(param_3 + 0xb,0);
    FUN_00316efc(param_3 + 0xb,1,0);
    FUN_00316efc(param_3 + 0xb,2,0);
    FUN_00316f4c(param_3 + 9,6,0);
    *(undefined1 *)(param_3 + 0xc) = 0;
    FUN_00316f4c(param_3 + 9,5,1);
  }
  return;
}
