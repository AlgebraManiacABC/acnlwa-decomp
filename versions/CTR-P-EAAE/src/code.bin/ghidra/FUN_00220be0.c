/**
 * FUN_00220be0.c
 * Source line: 277311
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00220be0(int param_1)

{
  if (*(int *)(param_1 + 0xb28c) != 0) {
    if (*(char *)(*(int *)(param_1 + 0xb28c) + 0x26b) == '\x01') {
      FUN_0060e0cc();
    }
    FUN_006a8c3c(*(undefined4 *)(param_1 + 0xb28c));
    *(undefined1 *)(param_1 + 0xb3a8) = 0;
    (**(code **)(**(int **)(param_1 + 0xb28c) + 0xc))();
  }
  *(undefined4 *)(param_1 + 0xb28c) = 0;
  return;
}
