/**
 * FUN_006c8938.c
 * Source line: 1026283
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006c8938(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x44) + 0xc) != 0) {
    FUN_004b6dc8();
    *(undefined1 *)(param_1 + 0x431) = 0;
  }
  if (param_2 != 0) {
    FUN_004b6d74(param_2,*(undefined4 *)(param_1 + 0x44));
    *(undefined1 *)(param_1 + 0x431) = 1;
  }
  return;
}
