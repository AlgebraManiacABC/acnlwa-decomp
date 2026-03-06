/**
 * FUN_002ef7a0.c
 * Source line: 385847
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002ef7a0(int param_1)

{
  if ((*(char *)(param_1 + 0x22d5) != '\x01') &&
     ((*(byte *)(*(int *)(param_1 + 0x228c) + 0xb7) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x22e0) = *(undefined4 *)(param_1 + 0x2220);
    FUN_002fae84();
    return;
  }
  return;
}
