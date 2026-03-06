/**
 * FUN_002fb7b0.c
 * Source line: 393939
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002fb7b0(int param_1)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x79) << 0x1d) < 0) {
    uVar1 = FUN_00584134();
    FUN_0058c5f0(uVar1,0x24);
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) & 0xf9;
  }
  return;
}
