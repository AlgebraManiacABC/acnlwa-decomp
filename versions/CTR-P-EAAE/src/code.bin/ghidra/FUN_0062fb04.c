/**
 * FUN_0062fb04.c
 * Source line: 946844
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0062fb04(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20000,uVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_001e5e88(0), iVar2 - 5U < 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
