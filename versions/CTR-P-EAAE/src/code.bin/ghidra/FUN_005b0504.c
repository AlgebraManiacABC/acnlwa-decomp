/**
 * FUN_005b0504.c
 * Source line: 861750
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005b0504(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffe0001f | param_2 << 5;
  return;
}
