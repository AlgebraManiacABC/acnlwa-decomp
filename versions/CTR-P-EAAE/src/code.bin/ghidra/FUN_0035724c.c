/**
 * FUN_0035724c.c
 * Source line: 458118
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0035724c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) =
       param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
       param_2 >> 0x18;
  return;
}
