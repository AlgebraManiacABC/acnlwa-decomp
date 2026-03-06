/**
 * FUN_005b05c0.c
 * Source line: 861927
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005b05c0(int param_1,uint param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) & 0xffffe1ff |
       ((*(uint *)(param_1 + 0x28) & 0x1e00) >> 9 | 1 << (param_2 & 0xff) & 0xfU) << 9;
  *(undefined4 *)(param_1 + param_2 * 4 + 0x30) = param_3;
  return;
}
