/**
 * FUN_0064f3b4.c
 * Source line: 961202
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0064f3b4(int param_1,uint param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    if ((0x31 < param_2) ||
       ((*(byte *)(param_1 + 0x17d + (param_2 >> 3)) >> (param_2 & 7) & 1) == 0)) {
      uVar1 = FUN_00584134();
      FUN_0058c514(uVar1,param_2);
      if (param_2 < 0x32) {
        pbVar2 = (byte *)(param_1 + 0x17d + (param_2 >> 3));
        *pbVar2 = *pbVar2 | (byte)(1 << (param_2 & 7));
      }
    }
  }
  return;
}
