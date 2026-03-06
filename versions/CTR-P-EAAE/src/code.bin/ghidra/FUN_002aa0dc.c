/**
 * FUN_002aa0dc.c
 * Source line: 348413
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002aa0dc(int param_1)

{
  if (*(char *)(param_1 + 0x98) != '\0') {
    FUN_0024727c(param_1);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}
