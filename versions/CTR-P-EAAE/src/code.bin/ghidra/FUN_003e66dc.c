/**
 * FUN_003e66dc.c
 * Source line: 559405
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_003e66dc(int param_1,undefined4 param_2,uint param_3)

{
  if (0x100 < param_3) {
    param_3 = 0x100;
  }
  __rt_memclr_w(param_1 + 0x34,0x202);
  nnnstdMemCpy(param_1 + 0x34,param_2,param_3 << 1);
  *(undefined2 *)(param_1 + param_3 * 2 + 0x34) = 0;
  *(uint *)(param_1 + 0x238) = param_3;
  return;
}
