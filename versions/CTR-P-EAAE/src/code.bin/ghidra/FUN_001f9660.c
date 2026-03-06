/**
 * FUN_001f9660.c
 * Source line: 258767
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001f9660(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xf4)) {
    *(undefined4 *)(*(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0xf0) * 4) = param_2;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  return;
}
