/**
 * FUN_002ff800.c
 * Source line: 397644
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_002ff800(int param_1)

{
  *(ushort *)(param_1 + 2) =
       *(ushort *)(param_1 + 2) & 0x3fff | (*(ushort *)(param_1 + 2) >> 0xe | 2) << 0xe;
  return;
}
