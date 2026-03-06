/**
 * FUN_00158f24.c
 * Source line: 171698
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00158f24(int param_1)

{
  __rt_memclr_w(param_1 + 8,0x80);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}
