/**
 * FUN_005c5eb8.c
 * Source line: 875102
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005c5eb8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(param_1,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((int)((uint)*(byte *)(iVar1 + 0x171) << 0x1a) < 0) && (*(char *)(iVar1 + 0x1a9) == -0x16))
    {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
