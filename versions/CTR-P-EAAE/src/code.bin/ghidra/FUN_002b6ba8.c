/**
 * FUN_002b6ba8.c
 * Source line: 354257
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002b6ba8(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00569544();
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00569544(param_1 + 0x98);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x122) = 1;
  return;
}
