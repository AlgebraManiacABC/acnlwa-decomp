/**
 * FUN_0065fd68.c
 * Source line: 970312
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0065fd68(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_006609bc(param_1);
    FUN_00651600(param_1,0xffffffff);
  }
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xf7;
  return;
}
