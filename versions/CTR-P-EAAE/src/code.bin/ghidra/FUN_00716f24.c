/**
 * FUN_00716f24.c
 * Source line: 1070910
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00716f24(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((_DAT_00aaf14c != 0) &&
     (iVar1 = (uint)*(byte *)(_DAT_00aaf14c + 0x5701) * 0x40000000, -1 < iVar1)) {
    return;
  }
  FUN_002fae84(iVar1);
  return;
}
