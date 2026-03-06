/**
 * FUN_00238e10.c
 * Source line: 289929
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00238e10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [12];
  
  iVar1 = DAT_0095debc;
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar2 != 0 && DAT_0095debc != 0)) {
    FUN_005fcfd8(auStack_20);
    uVar3 = FUN_005ca3b0(param_2);
    FUN_0075c400(iVar1,auStack_20,"STR_Fobj_name",uVar3);
    FUN_005f12e4(iVar2,auStack_20,param_3);
    return 1;
  }
  return 0;
}
