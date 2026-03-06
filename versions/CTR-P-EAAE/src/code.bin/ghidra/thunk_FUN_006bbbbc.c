/**
 * thunk_FUN_006bbbbc.c
 * Source line: 399868
 * Body lines: 3
 */
#include "../../../include/types.h"

void thunk_FUN_006bbbbc(int param_1)

{
  *(ushort *)(param_1 + 2) =
       *(ushort *)(param_1 + 2) & 0x3fff | (*(ushort *)(param_1 + 2) >> 0xe & 0xfffe) << 0xe;
  return;
}
