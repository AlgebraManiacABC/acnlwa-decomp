/**
 * FUN_001d7650.c
 * Source line: 240104
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001d7650(int param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x03') {
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_004c46ec();
    }
    *(undefined1 *)(param_1 + 0xd8) = 2;
  }
  return;
}
