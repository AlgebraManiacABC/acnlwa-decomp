/**
 * FUN_0071749c.c
 * Source line: 1071019
 * Body lines: 9
 */
#include "../../../include/types.h"

void * FUN_0071749c(void)

{
  int iVar1;
  void *pvVar2;
  
  if (((_DAT_00aaf14c == 0) || ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e) < 0)) &&
     (iVar1 = FUN_0056c0e4(), iVar1 == 0)) {
    FUN_002fb378();
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
