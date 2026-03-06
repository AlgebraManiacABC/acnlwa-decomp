/**
 * FUN_005c631c.c
 * Source line: 875317
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_005c631c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,1);
  uVar2 = 0;
  if ((iVar1 != 0) &&
     ((*(char *)(iVar1 + 0x1a9) != -0x21 ||
      (iVar1 = FUN_0070ab24(iVar1 + 0x1b4,0), uVar2 = 0, iVar1 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}
