/**
 * FUN_001cde00.c
 * Source line: 234618
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_001cde00(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xff000000;
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xff00;
  return;
}
