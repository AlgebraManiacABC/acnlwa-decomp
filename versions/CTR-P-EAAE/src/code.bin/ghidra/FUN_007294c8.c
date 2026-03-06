/**
 * FUN_007294c8.c
 * Source line: 1082505
 * Body lines: 1
 */
#include "../../../include/types.h"

ushort FUN_007294c8(int param_1)

{
  return *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
}
