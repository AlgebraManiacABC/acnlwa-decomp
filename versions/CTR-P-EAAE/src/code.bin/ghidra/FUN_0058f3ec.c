/**
 * FUN_0058f3ec.c
 * Source line: 839665
 * Body lines: 13
 */
#include "../../../include/types.h"

void * FUN_0058f3ec(void)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  iVar1 = FUN_00305f2c();
  if (iVar1 == 3) {
    return NULL;
  }
  if (DAT_0095bf80 == '\0') {
    uVar3 = FUN_005d46dc();
    return (void *)(1 << (uVar3 & 0xff) & 0xffff);
  }
  pvVar2 = GET_DAT_0095bf74();
  return pvVar2;
}
