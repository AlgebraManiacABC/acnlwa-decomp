/**
 * FUN_0058394c.c
 * Source line: 829750
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0058394c(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0x27 && param_1 != 0x9d) && param_1 != 0x9e) {
    iVar1 = FUN_00766f1c(DAT_0094d080,param_1);
    if (iVar1 == 0) {
          // WARNING: Subroutine does not return
      FUN_0058660c();
    }
    if ((_DAT_00aaf14c == 0) ||
       (((int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e) < 0 &&
        (-1 < *(char *)(_DAT_00aaf14c + 0x572b))))) {
      return 1;
    }
  }
  return 0;
}
