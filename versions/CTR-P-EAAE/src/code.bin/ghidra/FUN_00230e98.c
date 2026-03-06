/**
 * FUN_00230e98.c
 * Source line: 285742
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00230e98(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x11c))();
  FUN_00813b30(param_1 + 0x224,5,0);
  FUN_00813b30(param_1 + 0x224,6,0);
  if (*(char *)(param_1 + 0x224) < '\0') {
    FUN_00813b30(param_1 + 0x224,7,0);
    FUN_00292ca8();
  }
  if ((*(byte *)(param_1 + 0x225) & 1) != 0) {
    FUN_00813b30(param_1 + 0x224,8,0);
    FUN_00292ca8();
  }
  *(undefined1 *)(param_1 + 0x20c) = 0;
  return;
}
