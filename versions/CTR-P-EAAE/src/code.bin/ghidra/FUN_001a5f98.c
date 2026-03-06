/**
 * FUN_001a5f98.c
 * Source line: 212583
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001a5f98(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0xf3) = 0xd;
  *(undefined1 *)(param_1 + 0x136) = 2;
  if ((*(byte *)(param_1 + 0x1b2) & 2) == 0) {
    uVar1 = FUN_00584134();
    FUN_0058c514(uVar1,0x27);
    *(byte *)(param_1 + 0x1b2) = *(byte *)(param_1 + 0x1b2) | 2;
  }
  return;
}
