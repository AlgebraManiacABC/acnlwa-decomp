/**
 * FUN_003e6620.c
 * Source line: 559362
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_003e6620(int *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2 + -0x40000 < (uint *)0x3ff00000) {
    uVar1 = *(uint *)(*param_1 + 4);
    *param_2 = ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
               ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
    *(ushort *)(param_2 + 1) = *(ushort *)(*param_1 + 2) << 8 | *(ushort *)(*param_1 + 2) >> 8;
  }
  return;
}
