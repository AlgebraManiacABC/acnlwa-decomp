/**
 * FUN_001dea94.c
 * Source line: 245310
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001dea94(int param_1)

{
  if ((*(byte *)(param_1 + 0x212) & 2) == 0) {
    *(undefined1 *)(param_1 + 0x211) = 0xff;
    FUN_002fb94c();
    return;
  }
  return;
}
