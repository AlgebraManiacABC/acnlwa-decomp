/**
 * FUN_005b04e8.c
 * Source line: 861741
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005b04e8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2c) = (param_2 & 0xf) << 0x15 | *(uint *)(param_1 + 0x2c) & 0xfe1fffff;
  return;
}
