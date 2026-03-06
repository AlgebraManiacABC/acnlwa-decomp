/**
 * FUN_00668440.c
 * Source line: 974534
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00668440(int param_1)

{
  int iVar1;
  
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) &&
     (*(short *)(param_1 + 0x224) == 0x114)) {
    iVar1 = FUN_0070acd0(0x41a00000,param_1 + 0x1b4,0);
    if (iVar1 != 0) {
      FUN_0068dc14(param_1,0x1000557,0);
    }
    iVar1 = FUN_0070ab24(param_1 + 0x1b4,0);
    if (iVar1 != 0) {
      FUN_0064d0b8(param_1,0xf,0);
      return;
    }
  }
  return;
}
