/**
 * FUN_005c789c.c
 * Source line: 876435
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005c789c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c507c(0x21,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_005c33d0(4,0), uVar2 = 0, iVar1 != 0)) {
    iVar1 = FUN_0067eee8(iVar1,0,5,0x1c,0,&DAT_0095bfdc,0,1,1,0xc,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}
