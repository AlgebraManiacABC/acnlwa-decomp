/**
 * FUN_004c8d90.c
 * Source line: 708490
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004c8d90(int param_1)

{
  if (*(char *)(param_1 + 0x261) == '\0') {
    *(undefined1 *)(param_1 + 0x260) = 0;
    *(undefined1 *)(param_1 + 0x261) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  return;
}
