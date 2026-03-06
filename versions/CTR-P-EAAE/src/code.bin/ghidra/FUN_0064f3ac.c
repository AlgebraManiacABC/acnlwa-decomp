/**
 * FUN_0064f3ac.c
 * Source line: 961186
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0064f3ac(int param_1)

{
  undefined4 uVar1;
  
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) &&
     ((*(byte *)(param_1 + 0x182) >> 1 & 1) == 0)) {
    uVar1 = FUN_00584134();
    FUN_0058c514(uVar1,0x29);
    *(byte *)(param_1 + 0x182) = *(byte *)(param_1 + 0x182) | 2;
  }
  return;
}
