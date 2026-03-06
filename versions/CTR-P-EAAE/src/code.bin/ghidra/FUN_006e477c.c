/**
 * FUN_006e477c.c
 * Source line: 1042248
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_006e477c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x54) = param_2 & 0x3ffff | (uint)*(ushort *)(param_1 + 0xc) << 0x12;
  return;
}
