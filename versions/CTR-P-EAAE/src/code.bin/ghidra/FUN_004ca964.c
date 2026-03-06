/**
 * FUN_004ca964.c
 * Source line: 710025
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_004ca964(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 1;
  return;
}
