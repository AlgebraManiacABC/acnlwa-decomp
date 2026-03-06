/**
 * FUN_0030909c.c
 * Source line: 407306
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0030909c(int param_1)

{
  *(uint *)(param_1 + 0xca0) = *(uint *)(param_1 + 0xca0) & 0xfffffff7;
  *(uint *)(param_1 + 0x13a4) = *(uint *)(param_1 + 0x13a4) & 0xfffffff7;
  *(uint *)(param_1 + 0x1aa8) = *(uint *)(param_1 + 0x1aa8) & 0xfffffff7;
  FUN_00299984(param_1 + 0x1ab8,0);
  DAT_0094fd58 = DAT_0094fd58 & 0xfffff7ff;
  return;
}
