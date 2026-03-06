/**
 * FUN_006302f4.c
 * Source line: 947364
 * Body lines: 12
 */
#include "../../../include/types.h"

void * FUN_006302f4(void)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20000,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_002fb378();
    iVar2 = FUN_0063061c(uVar1,1);
    return (void *)((iVar2 >> 0x1f) + 1);
  }
  pvVar3 = GET_DAT_0095bf74();
  return pvVar3;
}
