/**
 * FUN_001120f0.c
 * Source line: 112956
 * Body lines: 10
 */
#include "../../../include/types.h"

void * FUN_001120f0(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_00300904();
  if ((((iVar1 == 0) && (iVar1 = FUN_00308e80(), iVar1 == 0x26)) &&
      (iVar1 = FUN_002fe8a8(0), iVar1 != 0)) &&
     (((*(byte *)(iVar1 + 0x5701) >> 1 & 1) != 0 && ((*(byte *)(iVar1 + 0x5704) >> 1 & 1) != 0)))) {
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
