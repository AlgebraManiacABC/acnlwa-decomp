/**
 * FUN_006ced84.c
 * Source line: 1029945
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006ced84(int param_1)

{
  if (*(char *)(param_1 + 0xa10) == '\x01') {
    if (*(byte *)(param_1 + 0xa12) < 5) {
      param_1 += (uint)*(byte *)(param_1 + 0xa12) * 0x178;
      FUN_00569544(param_1 + 0x3c8);
      if (*(char *)(DAT_0094e3c8 + 0xfb0) == '\0') {
          // WARNING: Subroutine does not return
        FUN_00568c10(param_1 + 0x27c);
      }
    }
  }
  else {
    FUN_0081b960(param_1,FUN_006ce920,0);
  }
  return;
}
