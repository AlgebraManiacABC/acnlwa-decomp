/**
 * FUN_0030b2d0.c
 * Source line: 409341
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0030b2d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1 + 0x694;
  iVar2 = FUN_0074fdd0();
  if (iVar2 != 0) {
    uVar3 = FUN_004b4fc0(param_1 + 0x4d0,"G_list",1);
    FUN_00568984(param_1 + 0x4d0,iVar1,uVar3,0);
    uVar3 = FUN_004b4fc0(param_1 + 0x4d0,"G_msg",1);
    FUN_00568984(param_1 + 0x4d0,iVar1,uVar3,0);
    FUN_00819b20(param_1 + 0x28,FUN_0030a1b4,0);
    return;
  }
  FUN_00569544(iVar1);
  return;
}
