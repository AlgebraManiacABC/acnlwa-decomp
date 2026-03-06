/**
 * FUN_006c8ef0.c
 * Source line: 1026415
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006c8ef0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x44) + 0xc) != 0) {
    FUN_004b6dc8();
    *(undefined1 *)(param_1 + 0x431) = 0;
  }
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0x24);
}
