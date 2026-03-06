/**
 * FUN_001c0f3c.c
 * Source line: 228159
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001c0f3c(int param_1)

{
  if (*(char *)(param_1 + 0xe8) != '\0') {
    FUN_001d9fb0(param_1);
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  return;
}
