/**
 * FUN_001b32c8.c
 * Source line: 220196
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_001b32c8(int param_1,undefined4 param_2)

{
  __aeabi_memset(param_1 + 0x6c,0x800,0xcc);
  __rt_memcpy_w(param_1,param_2,0x26c);
  *(undefined1 *)(param_1 + 0x86c) = 0;
  return;
}
