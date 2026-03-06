/**
 * FUN_0024c520.c
 * Source line: 300075
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0024c520(int param_1,uint param_2)

{
  if (param_2 < 0x19) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1 << (param_2 & 0xff);
  }
  return;
}
