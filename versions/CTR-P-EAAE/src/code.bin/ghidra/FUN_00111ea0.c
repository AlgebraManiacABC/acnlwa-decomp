/**
 * FUN_00111ea0.c
 * Source line: 112872
 * Body lines: 11
 */
#include "../../../include/types.h"

void * FUN_00111ea0(uint param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_00305f2c();
  if ((iVar1 != 3) && (param_1 < 8)) {
    if (param_2 == 0) {
      FUN_002fb378();
    }
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
