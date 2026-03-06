/**
 * FUN_005c6d60.c
 * Source line: 875853
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005c6d60(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(param_1,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1a9) == -0x43) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
