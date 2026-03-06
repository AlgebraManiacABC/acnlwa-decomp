/**
 * FUN_00306e58.c
 * Source line: 404804
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00306e58(int param_1)

{
  __rt_memclr(*(undefined4 **)(param_1 + 0xc),*(int *)(param_1 + 8) << 2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
