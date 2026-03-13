/**
 * FUN_005b04d0.c
 * Source line: 861732
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005b04d0(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffe01 | param_2 << 1;
  return;
}
