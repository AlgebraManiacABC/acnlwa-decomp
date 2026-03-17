/**
 * FUN_003e6770.c
 * Source line: 559420
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003e6770(int param_1,undefined4 param_2,uint param_3)

{
  if (0x200 < param_3) {
    param_3 = 0x200;
  }
  __rt_memclr_w(param_1 + 0x23c,0x200);
  nnnstdMemCpy(param_1 + 0x23c,param_2,param_3);
  *(uint *)(param_1 + 0x43c) = param_3;
  return;
}
