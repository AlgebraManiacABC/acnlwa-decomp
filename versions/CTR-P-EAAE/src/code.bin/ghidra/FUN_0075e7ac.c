/**
 * FUN_0075e7ac.c
 * Source line: 1118886
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 FUN_0075e7ac(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_2 < 4) {
    iVar2 = DAT_0095362c + 0x13280;
    FUN_00135740(iVar2);
    uVar1 = *(undefined1 *)(param_1 + param_2 + 0x24);
    FUN_00137e84(iVar2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
