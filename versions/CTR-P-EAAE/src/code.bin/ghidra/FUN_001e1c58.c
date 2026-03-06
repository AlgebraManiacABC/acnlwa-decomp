/**
 * FUN_001e1c58.c
 * Source line: 247721
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001e1c58(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + (uint)(*(byte *)(param_1 + 0x25) >> 5);
  if (7 < uVar1) {
    if (param_2 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 7;
    }
  }
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0x1f | (byte)(uVar1 << 5);
  return;
}
