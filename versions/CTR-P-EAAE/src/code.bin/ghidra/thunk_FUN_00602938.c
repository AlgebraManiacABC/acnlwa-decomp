/**
 * thunk_FUN_00602938.c
 * Source line: 410370
 * Body lines: 7
 */
#include "../../../include/types.h"

void thunk_FUN_00602938(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  if (*(char *)(param_1 + 4) == '\b') {
    FUN_005fbc20(*(undefined4 *)(param_1 + 0x348));
    return;
  }
  return;
}
