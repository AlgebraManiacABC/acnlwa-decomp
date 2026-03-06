/**
 * FUN_004bda8c.c
 * Source line: 699731
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004bda8c(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffff800;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff800;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}
