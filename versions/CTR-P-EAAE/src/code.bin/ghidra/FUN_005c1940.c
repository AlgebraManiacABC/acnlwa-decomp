/**
 * FUN_005c1940.c
 * Source line: 871140
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005c1940(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(param_1,1);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a) < 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
