/**
 * FUN_005a8b9c.c
 * Source line: 855748
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005a8b9c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam0097e0c1 == '\0') {
    FUN_00351f98(0x866,0xc,0x1f,0x17,0x3b,0x3b,0);
    iVar2 = FUN_0012f87c(0x866,0xc,0x1f);
    lRam0097e0d0 = (longlong)iVar2 * 0x15180 + 0x1517f;
    cRam0097e0c1 = '\x01';
  }
  uVar1 = lRam0097e0d0._4_4_;
  *param_1 = (undefined4)lRam0097e0d0;
  param_1[1] = uVar1;
  return;
}
