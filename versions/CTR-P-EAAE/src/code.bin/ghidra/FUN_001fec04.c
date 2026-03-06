/**
 * FUN_001fec04.c
 * Source line: 260409
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001fec04(int param_1)

{
  if (cRam00953368 != '\0') {
    *(undefined1 *)(param_1 + 0x47c) = 1;
    *(undefined1 *)(param_1 + 0x1b28) = 1;
    return;
  }
  FUN_001cb7ec(param_1 + 0x274);
  FUN_001cb7ec(param_1 + 0x480,1);
  return;
}
