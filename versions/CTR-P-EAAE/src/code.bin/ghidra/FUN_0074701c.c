/**
 * FUN_0074701c.c
 * Source line: 1103141
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0074701c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = iRam00974a58;
  if ((iRam00974a58 != 0) &&
     ((iVar1 = FUN_0072f380(iRam00974a58), iVar1 != 0 || (iVar2 = FUN_0072f3a4(iVar2), iVar2 != 0)))
     ) {
    return 1;
  }
  return 0;
}
