/**
 * FUN_0017bc40.c
 * Source line: 194893
 * Body lines: 14
 */
#include "../../../include/types.h"

void * FUN_0017bc40(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  iVar2 = FUN_006cac2c(uVar1);
  if (iVar2 != 0) {
    pvVar3 = GET_DAT_0095bf74();
    return pvVar3;
  }
  iVar2 = FUN_005ca52c(uVar1);
  if ((iVar2 != 0) && (iVar2 = FUN_005ca56c(uVar1), iVar2 != 0)) {
    return (void *)0x1;
  }
  return NULL;
}
