/**
 * FUN_004c7c48.c
 * Source line: 707559
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004c7c48(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}
