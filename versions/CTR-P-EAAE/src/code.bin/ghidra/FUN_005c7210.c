/**
 * FUN_005c7210.c
 * Source line: 876100
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005c7210(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1a9) == -0x3c)) {
    uVar2 = FUN_0070ae20(iVar1 + 0x1b4);
    iVar1 = FUN_0070ab24(iVar1 + 0x1b4,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
