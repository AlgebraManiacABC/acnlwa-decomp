/**
 * FUN_0045a544.c
 * Source line: 623674
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0045a544(int param_1)

{
  if (*(int *)(param_1 + 4) != iRam0097d438) {
    *(int *)(param_1 + 4) = iRam0097d438;
    *(undefined1 *)(param_1 + 9) = 0xfd;
    *(undefined1 *)(param_1 + 8) = 0xfd;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}
