/**
 * FUN_002e6a3c.c
 * Source line: 381715
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_002e6a3c(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  __aeabi_memset(param_1,0x1e,0xff);
  return param_1;
}
