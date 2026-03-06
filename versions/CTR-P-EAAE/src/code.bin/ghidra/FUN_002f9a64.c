/**
 * FUN_002f9a64.c
 * Source line: 392145
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002f9a64(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffdf;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x28)) {
    FUN_002f9a18(param_1);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffcfff | 0x10;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffbfbf;
  return;
}
