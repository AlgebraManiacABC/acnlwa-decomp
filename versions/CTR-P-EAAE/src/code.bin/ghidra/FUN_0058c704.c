/**
 * FUN_0058c704.c
 * Source line: 836535
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0058c704(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0x200000ff;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 4;
  return;
}
