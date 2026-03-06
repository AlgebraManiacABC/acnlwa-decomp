/**
 * FUN_00659830.c
 * Source line: 967219
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00659830(int param_1)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) & 0xbf;
    uVar1 = FUN_0058c19c();
    FUN_00589f34(uVar1,0x46);
    return;
  }
  return;
}
