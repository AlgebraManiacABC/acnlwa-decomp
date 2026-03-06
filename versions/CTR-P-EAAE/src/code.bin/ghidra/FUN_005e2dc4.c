/**
 * FUN_005e2dc4.c
 * Source line: 893075
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005e2dc4(int param_1)

{
  if (*(int *)(param_1 + 600) != 0) {
    if (*(int *)(*(int *)(param_1 + 600) + 0xc) != 0) {
      FUN_004b6dc8();
    }
    *(undefined1 *)(param_1 + 0xd9) = 0;
  }
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0x238);
}
