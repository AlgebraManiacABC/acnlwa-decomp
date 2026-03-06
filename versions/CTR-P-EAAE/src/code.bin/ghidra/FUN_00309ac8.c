/**
 * FUN_00309ac8.c
 * Source line: 407889
 * Body lines: 13
 */
#include "../../../include/types.h"

void * FUN_00309ac8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_2 == 0) {
    FUN_002fb378();
  }
  uVar1 = FUN_002fe4c0(param_1);
  iVar2 = FUN_00305f2c();
  if ((iVar2 != 3) && (uVar1 < 8)) {
    pvVar3 = GET_DAT_0095bf74();
    return pvVar3;
  }
  return NULL;
}
