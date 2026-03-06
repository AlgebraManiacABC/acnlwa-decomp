/**
 * FUN_0068a708.c
 * Source line: 991923
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0068a708(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x8ca);
    if (3 < uVar1) {
      uVar1 = 0;
    }
    FUN_0068db1c(0,0x3f800000,0x41000000,0x40c00000,0x40c00000,param_1,
                 *(undefined2 *)(&UNK_0084356e + uVar1 * 0x10),0,0,0xf);
    uVar2 = FUN_0071a844(param_1 + 0x3b4);
    FUN_001cf9c4(0,param_1 + 0x1b4,uVar2,0,0,1,1,1);
  }
  return;
}
