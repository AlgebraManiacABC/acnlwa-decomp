/**
 * FUN_005b0120.c
 * Source line: 861405
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005b0120(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) & 0xffffe1ff |
       ((*(uint *)(param_1 + 0x28) & 0x1e00) >> 9 & ~(1 << (param_2 & 0xff))) << 9;
  *(undefined4 *)(param_1 + param_2 * 4 + 0x30) = 0;
  return;
}
