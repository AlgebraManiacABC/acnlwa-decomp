/**
 * FUN_001f92d4.c
 * Source line: 258631
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001f92d4(int param_1)

{
  if ((*(int *)(param_1 + 0x1d0) != 0) &&
     (*(int *)(param_1 + 0x1d4) == *(int *)(*(int *)(param_1 + 0x1d0) + 0xc))) {
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    FUN_002e6368(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  }
  return;
}
