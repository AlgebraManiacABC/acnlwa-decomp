/**
 * FUN_004cb428.c
 * Source line: 710632
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004cb428(int param_1)

{
  if (*(char *)(param_1 + 500) != '\0') {
    *(undefined1 *)(param_1 + 0x1f7) = 1;
    FUN_00461bf4();
    *(undefined1 *)(param_1 + 500) = 0;
  }
  return;
}
