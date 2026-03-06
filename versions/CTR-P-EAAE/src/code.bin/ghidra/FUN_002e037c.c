/**
 * FUN_002e037c.c
 * Source line: 377778
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002e037c(int param_1,int param_2)

{
  if (*(int *)(param_1 + 600) != 0) {
    if (*(int *)(*(int *)(param_1 + 600) + 0xc) != 0) {
      FUN_004b6dc8();
    }
    *(undefined1 *)(param_1 + 0xd9) = 0;
    if (param_2 != 0) {
      FUN_004b6d74(param_2,*(undefined4 *)(param_1 + 600));
      *(int *)(param_1 + 0x500) = param_2;
      *(undefined1 *)(param_1 + 0xd9) = 1;
    }
  }
  return;
}
