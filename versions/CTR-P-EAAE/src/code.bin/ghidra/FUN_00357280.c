/**
 * FUN_00357280.c
 * Source line: 458139
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_00357280(int param_1,uint param_2)

{
  *(ushort *)(param_1 + 6) = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  return;
}
