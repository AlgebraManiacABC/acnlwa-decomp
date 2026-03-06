/**
 * FUN_001db0d0.c
 * Source line: 242923
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001db0d0(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0xb4) == '\x02') {
    *(undefined1 *)(param_1 + 0xb7) = param_2;
    FUN_001b0544(0x3ee66666,param_1 + 0xcc,0);
    *(undefined1 *)(param_1 + 0xe0) = 1;
    *(undefined1 *)(param_1 + 0xb4) = 3;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xd0);
  }
  return;
}
