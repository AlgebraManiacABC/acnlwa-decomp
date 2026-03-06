/**
 * FUN_0030c3e4.c
 * Source line: 411212
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0030c3e4(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 399) {
    if (param_2 >> 3 < 0x32) {
      param_1 += param_2 >> 3;
      bVar1 = (byte)(1 << (param_2 & 7));
      *(byte *)(param_1 + 0x196fc) = *(byte *)(param_1 + 0x196fc) | bVar1;
      *(byte *)(param_1 + 0x1972e) = *(byte *)(param_1 + 0x1972e) | bVar1;
    }
    return;
  }
  return;
}
