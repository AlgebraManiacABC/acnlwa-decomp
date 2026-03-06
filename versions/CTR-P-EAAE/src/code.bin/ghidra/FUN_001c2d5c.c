/**
 * FUN_001c2d5c.c
 * Source line: 229487
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001c2d5c(int param_1)

{
  if (*(int *)(param_1 + 8) == 0x89) {
    FUN_0058d3b4(0,0x100052f);
  }
  FUN_002b7910(*(undefined4 *)(param_1 + 0x4c));
  FUN_0026f970(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x972c) = 1;
  if (*(char *)(param_1 + 0x9720) == '\x01') {
    FUN_0031e810(param_1 + 0x9234);
  }
  FUN_00694918(_DAT_0094f708,10);
  return;
}
