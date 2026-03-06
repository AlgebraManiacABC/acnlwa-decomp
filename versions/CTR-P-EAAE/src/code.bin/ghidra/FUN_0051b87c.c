/**
 * FUN_0051b87c.c
 * Source line: 760931
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0051b87c(int param_1)

{
  if (*(char *)(param_1 + 0xb0) != '\0') {
    FUN_003da354(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_1 + 0x218);
    *(undefined1 *)(param_1 + 0xb0) = 0;
    FUN_005cecfc();
    return;
  }
  return;
}
