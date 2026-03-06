/**
 * FUN_005c2da0.c
 * Source line: 872459
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005c2da0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(param_1,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1a9) == -0x17)) {
    uVar2 = 1;
  }
  return uVar2;
}
