/**
 * FUN_007b1b00.c
 * Source line: 1154450
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_007b1b00(undefined4 *param_1)

{
  if (param_1 != NULL) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}
