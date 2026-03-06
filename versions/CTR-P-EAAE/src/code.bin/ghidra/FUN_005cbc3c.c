/**
 * FUN_005cbc3c.c
 * Source line: 879304
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005cbc3c(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xf8 | param_2 & 7;
  return;
}
