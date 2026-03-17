/**
 * FUN_005aa7c0.c
 * Source line: 857142
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005aa7c0(int param_1)

{
  __rt_memclr_w(param_1,0x6c);
  FUN_005a8b14(param_1);
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}
