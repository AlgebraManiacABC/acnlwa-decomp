/**
 * FUN_005a8af0.c
 * Source line: 855696
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005a8af0(int param_1)

{
  __rt_memclr_w(param_1,0x50);
  FUN_005a8b14(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}
