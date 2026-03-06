/**
 * FUN_00452e4c.c
 * Source line: 618008
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00452e4c(int param_1)

{
  if (*(int *)(param_1 + 0x5c) - 1U < 0xfe) {
    uRam00ae61d0 = (undefined1)*(int *)(param_1 + 0x5c);
  }
  else {
    uRam00ae61d0 = 0xff;
  }
  return;
}
