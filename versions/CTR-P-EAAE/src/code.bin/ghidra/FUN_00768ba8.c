/**
 * FUN_00768ba8.c
 * Source line: 1126429
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00768ba8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fccdc();
  if ((((iVar1 == 0xb || iVar1 == 0xc) || (iVar1 == 0xd || iVar1 == 0xe)) ||
      (iVar1 == 0x1b || iVar1 == 0x1c)) ||
     ((iVar1 == 0x10 || iVar1 == 0xf || (iVar1 == 0x11 || iVar1 == 0x14)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
