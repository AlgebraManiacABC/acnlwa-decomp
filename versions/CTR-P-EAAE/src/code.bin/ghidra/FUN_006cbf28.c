/**
 * FUN_006cbf28.c
 * Source line: 1028602
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006cbf28(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0062fb44();
  if (((iVar1 == 0) && (iVar1 = FUN_002fb378(), (*(int *)(iVar1 + 4) >> 0x18) - 6U < 0xd)) &&
     (iVar1 = FUN_0062f03c(), iVar1 != 5 && iVar1 != 6)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
