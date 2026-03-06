/**
 * FUN_0020b3ac.c
 * Source line: 267734
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0020b3ac(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 6;
  *(undefined1 *)(param_1 + 0x35) = 1;
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(undefined1 *)(param_1 + 0x39) = 0;
    FUN_0020a4cc(param_1);
    *(undefined4 *)(param_1 + 0x5c) = 0x1000787;
  }
  return;
}
