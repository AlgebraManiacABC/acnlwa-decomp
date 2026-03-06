/**
 * FUN_00710664.c
 * Source line: 1066658
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00710664(void)

{
  int iVar1;
  
  iVar1 = FUN_00300904();
  if ((iVar1 == 0) &&
     ((_DAT_00aaf14c == 0 || ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e) < 0)))) {
    return 1;
  }
  return 0;
}
