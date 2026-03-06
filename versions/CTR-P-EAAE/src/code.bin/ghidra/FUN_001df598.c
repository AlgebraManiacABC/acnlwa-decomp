/**
 * FUN_001df598.c
 * Source line: 245822
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001df598(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(byte *)(param_1 + 3) >> 1) + (*(byte *)(param_1 + 4) & 1) * 0x80 + param_2;
  if (0xff < uVar1) {
    if (param_2 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xff;
    }
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 1 | (byte)(uVar1 << 1);
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe | (byte)((uVar1 & 0x80) >> 7);
  return;
}
