/**
 * FUN_005c2920.c
 * Source line: 872060
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_005c2920(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005c33d0(param_1,1);
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_00763818(), uVar2 = 0, iVar1 != 0)) {
    uVar2 = ((uint)*(byte *)(iVar1 + 8) << 0x1a) >> 0x1f;
  }
  return uVar2;
}
