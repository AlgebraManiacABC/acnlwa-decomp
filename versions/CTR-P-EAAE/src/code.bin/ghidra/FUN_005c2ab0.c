/**
 * FUN_005c2ab0.c
 * Source line: 872231
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005c2ab0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_00271d60(iVar1 + 0x1b4), uVar2 = 0, iVar1 != 0)) {
    FUN_0031d7f4(0,0x3f800000,iVar1,0xc,1,0);
    uVar2 = 1;
  }
  return uVar2;
}
