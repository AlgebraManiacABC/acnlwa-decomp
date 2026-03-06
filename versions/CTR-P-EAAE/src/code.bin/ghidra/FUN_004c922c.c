/**
 * FUN_004c922c.c
 * Source line: 708715
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004c922c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 3) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}
