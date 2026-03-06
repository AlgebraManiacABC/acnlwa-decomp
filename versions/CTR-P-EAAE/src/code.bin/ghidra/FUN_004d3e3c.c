/**
 * FUN_004d3e3c.c
 * Source line: 716870
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004d3e3c(int param_1)

{
  if (*(char *)(param_1 + 0x13d) == '\0') {
    if (*(char *)(param_1 + 0x98) != '\x04') {
      if ((*(int *)(param_1 + 0x1a8) != 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
        FUN_004c9d40(*(int *)(param_1 + 0x1a8),1);
      }
      *(undefined1 *)(param_1 + 0x98) = 4;
    }
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}
