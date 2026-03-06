/**
 * FUN_004668e8.c
 * Source line: 632836
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_004668e8(int param_1,short param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xffbf | param_2 << 6;
  return;
}
