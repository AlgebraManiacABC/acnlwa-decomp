/**
 * FUN_00710620.c
 * Source line: 1066641
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00710620(void)

{
  int iVar1;
  
  iVar1 = FUN_00300904();
  if ((iVar1 == 0) &&
     ((_DAT_00aaf14c == 0 || ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e) < 0)))) {
    return 0xffffffff;
  }
  return 8;
}
