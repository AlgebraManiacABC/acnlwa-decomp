/**
 * FUN_001e0210.c
 * Source line: 246558
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_001e0210(int param_1)

{
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xfff;
  return;
}
