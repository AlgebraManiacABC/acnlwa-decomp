/**
 * FUN_0066aa7c.c
 * Source line: 975761
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0066aa7c(int param_1)

{
  if ((*(byte *)(param_1 + 0x8c7) & 1) != 0) {
    FUN_0064d0b8(param_1,0x10,0);
    return;
  }
  if ((int)((uint)*(byte *)(param_1 + 0x8c5) << 0x1a) < 0) {
    FUN_0064d0b8(param_1,0x12,0);
    return;
  }
  FUN_0064d0b8(param_1,0xf,0);
  return;
}
