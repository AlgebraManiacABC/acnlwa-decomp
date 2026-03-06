/**
 * FUN_004c7b30.c
 * Source line: 707511
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004c7b30(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}
