/**
 * FUN_0060028c.c
 * Source line: 916771
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0060028c(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x80) = param_2;
    *(undefined4 *)(param_1 + 0x84) = param_3;
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  return;
}
