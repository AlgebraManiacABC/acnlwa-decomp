/**
 * FUN_00701688.c
 * Source line: 1057983
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00701688(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006bbd54(param_1,0x24,0x3f);
  iVar2 = FUN_005d1fb4(0x40172b02,0x18);
  if (iVar2 < 0x1f) {
    if (iVar2 < 0x12) {
      iVar2 = 0x12;
    }
  }
  else {
    iVar2 = 0x1e;
  }
  *(ushort *)(iVar1 + 2) = (ushort)iVar2 & 0x3fff | *(ushort *)(iVar1 + 2) & 0xc000;
  return;
}
