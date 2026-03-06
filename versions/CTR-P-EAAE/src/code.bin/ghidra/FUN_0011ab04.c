/**
 * FUN_0011ab04.c
 * Source line: 117744
 * Body lines: 10
 */
#include "../../../include/types.h"

void * FUN_0011ab04(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  
  FUN_003091e0();
  iVar1 = FUN_003091ec();
  if (iVar1 != 0) {
    FUN_00309eb8(param_1,iVar1 + 0x55a6);
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
