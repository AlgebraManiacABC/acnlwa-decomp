/**
 * FUN_0045726c.c
 * Source line: 621273
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0045726c(int *param_1)

{
  if ((char)param_1[1] != '\0') {
    if (*param_1 - 0x100000U < 0x3ff00000) {
      FUN_004574ac();
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}
