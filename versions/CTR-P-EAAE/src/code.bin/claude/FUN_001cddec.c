/**
 * FUN_001cddec.c
 * Source line: 234609
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_001cddec(int param_1,int param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x3fffffff | param_2 << 0x1e;
  return;
}
