/**
 * FUN_00309384.c
 * Source line: 407501
 * Body lines: 10
 */
#include "../../../include/types.h"

void * FUN_00309384(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_00305f2c();
  if ((iVar1 != 3) &&
     ((_DAT_00aaf14c == 0 || ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e) < 0)))) {
    FUN_002fb378();
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
