/**
 * FUN_0031951c.c
 * Source line: 419686
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0031951c(int param_1)

{
  if (_DAT_00aaf14c != 0) {
    FUN_00712850(_DAT_00aaf14c + 0x2c,*(uint *)(param_1 + 0x20d8) & 0xff);
    FUN_005c38c8();
  }
  *(undefined1 *)(param_1 + 0x3e20) = 1;
  return;
}
