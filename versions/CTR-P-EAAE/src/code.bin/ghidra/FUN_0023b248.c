/**
 * FUN_0023b248.c
 * Source line: 291666
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0023b248(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_28 [4];
  
  iVar1 = DAT_0095debc;
  puVar2 = &DAT_0095debc;
  if (DAT_0095debc != 0) {
    FUN_005fcfd8(auStack_28);
    FUN_0075be20(iVar1,(int)auStack_28,param_2,param_3);
    FUN_005dd570(param_1,auStack_28,param_4);
    puVar2 = auStack_28;
  }
  return puVar2;
}
