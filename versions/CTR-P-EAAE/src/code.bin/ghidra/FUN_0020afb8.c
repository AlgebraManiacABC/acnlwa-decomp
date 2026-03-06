/**
 * FUN_0020afb8.c
 * Source line: 267575
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0020afb8(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 5;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x37) = 0;
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(undefined1 *)(param_1 + 0x39) = 0;
    FUN_0020a4cc(param_1);
    *(undefined4 *)(param_1 + 0x5c) = 0x1000786;
  }
  return;
}
