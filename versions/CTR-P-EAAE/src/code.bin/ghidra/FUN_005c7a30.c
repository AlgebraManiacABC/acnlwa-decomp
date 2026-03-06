/**
 * FUN_005c7a30.c
 * Source line: 876514
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005c7a30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1a9) == -0x43) {
      *(byte *)(iVar1 + 0x177) = *(byte *)(iVar1 + 0x177) & 0xfb;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
