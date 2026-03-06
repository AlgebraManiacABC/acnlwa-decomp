/**
 * FUN_00306e7c.c
 * Source line: 404814
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00306e7c(int param_1)

{
  __aeabi_memset(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 8) << 2,0xff);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 4);
  return;
}
