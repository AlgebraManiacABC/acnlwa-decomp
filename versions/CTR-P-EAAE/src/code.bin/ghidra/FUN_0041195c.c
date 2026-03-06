/**
 * FUN_0041195c.c
 * Source line: 578411
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0041195c(int param_1)

{
  FUN_00442694();
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80;
  __rt_memclr_w(param_1 + 0x68,0x200);
  return;
}
