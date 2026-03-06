/**
 * FUN_006b9b5c.c
 * Source line: 1016544
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_006b9b5c(int param_1)

{
  *(ushort *)(param_1 + 2) =
       *(ushort *)(param_1 + 2) & 0x3fff | (*(ushort *)(param_1 + 2) >> 0xe & 0xfffd) << 0xe;
  return;
}
