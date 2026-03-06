/**
 * FUN_00439fc0.c
 * Source line: 603026
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00439fc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  __rt_memclr(*(undefined4 **)(param_1 + 0x4c),*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x40));
  __rt_memclr(*(undefined4 **)(param_1 + 0x54),*(int *)(param_1 + 0x40) << 2);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}
