/**
 * FUN_001feb18.c
 * Source line: 260369
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001feb18(int param_1)

{
  if (cRam00953368 != '\0') {
    *(undefined1 *)(param_1 + 0x47c) = 0;
    *(undefined1 *)(param_1 + 0x1b28) = 0;
    return;
  }
  FUN_001cb7ec(param_1 + 0x274);
  FUN_001cb7ec(param_1 + 0x480,0);
  return;
}
