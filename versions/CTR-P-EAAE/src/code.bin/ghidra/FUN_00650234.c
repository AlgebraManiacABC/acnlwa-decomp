/**
 * FUN_00650234.c
 * Source line: 961756
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00650234(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    if (param_2 != 0) {
      *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 4;
      uVar1 = FUN_0058c19c();
      FUN_0058a8e0(uVar1,5);
    }
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x179) << 0x19)) {
      *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 0x40;
      FUN_0058c19c();
      FUN_0058a018();
    }
    *(undefined1 *)(param_1 + 0x170) = 4;
  }
  return;
}
