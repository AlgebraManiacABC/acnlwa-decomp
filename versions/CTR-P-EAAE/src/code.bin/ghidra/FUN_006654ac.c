/**
 * FUN_006654ac.c
 * Source line: 973065
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006654ac(undefined4 param_1,undefined1 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00656c20();
  *(undefined1 *)(iVar2 + 0xe) = param_2;
  uVar1 = (undefined1)((uint)param_4 >> 8);
  if (param_3 == 0) {
    FUN_005d41b8(iVar2 + 0xf,&DAT_00ae5658);
    *(undefined1 *)(iVar2 + 0x13) = uVar1;
  }
  else {
    FUN_005d41b8(iVar2 + 0xf,param_3);
    *(undefined1 *)(iVar2 + 0x13) = uVar1;
  }
  FUN_0064d0b8(param_1,0x3a,iVar2,0);
  return;
}
