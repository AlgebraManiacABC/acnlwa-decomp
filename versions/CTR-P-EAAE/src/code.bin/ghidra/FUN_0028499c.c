/**
 * FUN_0028499c.c
 * Source line: 329205
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0028499c(void)

{
  int iVar1;
  
  iVar1 = FUN_00305f2c();
  if ((iVar1 == 2) &&
     ((iVar1 = GET_BYTE_00957322(), iVar1 == 0x67 || (iVar1 = GET_BYTE_00957322(), iVar1 == 0x68))))
  {
    return 1;
  }
  return 0;
}
