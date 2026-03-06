/**
 * FUN_005a8c34.c
 * Source line: 855768
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005a8c34(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam0097e0c0 == '\0') {
    FUN_00351f98(0x76c,1,1,0,0,0,0);
    iVar2 = FUN_0012f87c(0x76c,1);
    lRam0097e0c8 = (longlong)iVar2 * 0x15180;
    cRam0097e0c0 = '\x01';
  }
  uVar1 = lRam0097e0c8._4_4_;
  *param_1 = (undefined4)lRam0097e0c8;
  param_1[1] = uVar1;
  return;
}
