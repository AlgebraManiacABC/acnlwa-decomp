/**
 * FUN_00670f54.c
 * Source line: 979129
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00670f54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00659750(0x3eb33333,param_1,0xffff8000,0x2800,0x80,param_4);
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x171) << 0x1a)) {
    FUN_0064f508(0x3e4ccccd,param_1,0);
  }
  iVar1 = FUN_0070ab24(param_1 + 0x1b4,0);
  if (iVar1 != 0) {
    if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
      FUN_0064d0b8(param_1,0xa1,0);
      return;
    }
    FUN_0068db1c(0,0x3f800000,0x40800000,0x40c00000,0x40c00000,param_1,0x56,1,0,1);
  }
  return;
}
