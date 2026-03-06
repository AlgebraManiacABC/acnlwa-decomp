/**
 * FUN_00230758.c
 * Source line: 285275
 * Body lines: 12
 */
#include "../../../include/types.h"

FUN_00230758(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [12];
  
  iVar1 = DAT_0095debc;
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar2 != 0 && DAT_0095debc != 0)) {
    FUN_005fcfd8(auStack_28);
    FUN_0075be20(iVar1,(int)auStack_28,param_2,param_3);
    FUN_005f11b4(iVar2,auStack_28,param_4,param_5);
    return 1;
  }
  return 0;
}
