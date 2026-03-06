/**
 * FUN_00638038.c
 * Source line: 951477
 * Body lines: 8
 */
#include "../../../include/types.h"

void * FUN_00638038(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_007559ac(param_3);
  if ((iVar1 == 0x60) && (iVar1 = FUN_00755a98(param_3), iVar1 == 0)) {
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
