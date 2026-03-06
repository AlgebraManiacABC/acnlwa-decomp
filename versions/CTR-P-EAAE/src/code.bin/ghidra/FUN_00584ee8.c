/**
 * FUN_00584ee8.c
 * Source line: 831323
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00584ee8(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x04') {
    if ((_DAT_00aaf14c != 0) && (-1 < (int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e))) {
          // WARNING: Subroutine does not return
      FUN_00584074();
    }
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 0x80;
  }
  return;
}
