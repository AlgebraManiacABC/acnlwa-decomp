/**
 * FUN_004d7f5c.c
 * Source line: 720002
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_004d7f5c(int param_1,undefined4 *param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 0x2006f;
    param_2[2] = 0;
    param_2[3] = &UNK_00200080;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[7] = 0xb0080;
    param_2[6] = 0x1000;
    __rt_memcpy(param_2 + 8,*(uint **)(param_1 + 4),*(uint *)(param_1 + 8));
    param_2 = (undefined4 *)((*(uint *)(param_1 + 8) & 0xfffffffc) + (int)(param_2 + 8));
  }
  *(undefined4 *)(param_1 + 0x684) = 0;
  return param_2;
}
