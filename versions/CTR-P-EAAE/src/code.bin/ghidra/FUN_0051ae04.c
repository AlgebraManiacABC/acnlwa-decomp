/**
 * FUN_0051ae04.c
 * Source line: 760388
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0051ae04(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00301d0c(param_1,FUN_0051ab9c,0x30,3);
  iVar1 = FUN_00125e08(iVar1 + 0x90);
  iVar1 = FUN_00125e08(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0012f154();
  iVar2 = 0;
  do {
    FUN_0013f134(iVar1 + -0xc,iVar1 + -0x9c + iVar2 * 0x30);
    iVar2 += 1;
  } while (iVar2 < 3);
  return iVar1 + -0x9c;
}
