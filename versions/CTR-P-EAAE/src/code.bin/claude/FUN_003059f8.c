/**
 * FUN_003059f8.c
 * Source line: 403503
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_003059f8(int param_1)

{
  __rt_memclr_w(param_1,0x2a);
  FUN_003052f0(param_1 + 0x2a);
  __rt_memclr_w(param_1 + 0x58,0xf);
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  __rt_memclr_w(param_1 + 0x6c,0x800);
  *(undefined1 *)(param_1 + 0x86c) = 0;
  return;
}
