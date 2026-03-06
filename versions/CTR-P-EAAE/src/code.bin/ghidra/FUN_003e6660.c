/**
 * FUN_003e6660.c
 * Source line: 559378
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003e6660(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *(uint *)(*param_1 + 4) =
       ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
       ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
  *(ushort *)(*param_1 + 2) = (ushort)param_2[1] << 8 | (ushort)param_2[1] >> 8;
  return;
}
