/**
 * FUN_0062fe6c.c
 * Source line: 947072
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0062fe6c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20000,uVar1);
  if ((iVar2 != 0) || (iVar2 = FUN_001e5e88(8), uVar1 = 1, iVar2 != 1)) {
    uVar1 = 0;
  }
  return uVar1;
}
