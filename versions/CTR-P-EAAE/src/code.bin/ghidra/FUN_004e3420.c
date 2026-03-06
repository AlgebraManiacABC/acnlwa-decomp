/**
 * FUN_004e3420.c
 * Source line: 727261
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004e3420(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_003171b4(&local_18,&uStack_14,param_1);
  iVar1 = FUN_004e9a28(0x9c7ad4,local_18,uStack_14,1);
  if ((iVar1 == 0) || (iVar2 = FUN_00751870(), iVar2 != 0x51)) {
    FUN_003171b4(&local_18,&uStack_14,param_1);
    iVar1 = FUN_004e9a28(0x9c7ad4,local_18,uStack_14,0);
    if ((iVar1 == 0) || (iVar2 = FUN_00751870(), iVar2 != 0x51)) {
      return;
    }
  }
  OnUnresolved(iVar1);
  return;
}
