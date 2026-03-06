/**
 * FUN_002fe3fc.c
 * Source line: 396372
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_002fe3fc(int param_1)

{
  *(ushort *)(param_1 + 2) =
       *(ushort *)(param_1 + 2) & 0x3fff | (*(ushort *)(param_1 + 2) >> 0xe | 1) << 0xe;
  return;
}
