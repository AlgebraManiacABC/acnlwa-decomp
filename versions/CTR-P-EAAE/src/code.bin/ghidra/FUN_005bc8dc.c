/**
 * FUN_005bc8dc.c
 * Source line: 867811
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005bc8dc(int param_1)

{
  if (*(byte *)(param_1 + 0xab) < 3) {
    FUN_0027a42c(param_1 + (uint)*(byte *)(param_1 + 0xab) * 0x16 + 8);
    return;
  }
  return;
}
