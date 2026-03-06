/**
 * FUN_0015529c.c
 * Source line: 168927
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0015529c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_130 [264];
  undefined1 auStack_28 [28];
  
  uVar2 = 0;
  iVar1 = FUN_00165dbc(0,param_1,0x60);
  if (iVar1 == 0) {
    FUN_00156860(auStack_130,param_1,1,param_1 + 0x48);
    iVar1 = FUN_001550f0(auStack_28);
    if ((iVar1 == 0) && (iVar1 = FUN_00155230(auStack_28), iVar1 == 0)) {
      uVar2 = FUN_001571a8(auStack_130,1);
    }
  }
  return uVar2;
}
