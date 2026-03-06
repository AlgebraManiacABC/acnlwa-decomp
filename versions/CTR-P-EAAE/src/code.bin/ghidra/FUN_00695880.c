/**
 * FUN_00695880.c
 * Source line: 999054
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00695880(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fc900();
  if (iVar1 != 0) {
    iVar1 = FUN_005c4e5c(0);
    uVar2 = 0;
    if ((iVar1 != 0) && (uVar2 = 0, *(char *)(iVar1 + 0x5712) < '\0')) {
      uVar2 = 1;
    }
    return uVar2;
  }
  uVar2 = FUN_002fb94c();
  return uVar2;
}
