/**
 * FUN_005c1034.c
 * Source line: 870488
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005c1034(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(param_1,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1a9) == '\x17' || *(char *)(iVar1 + 0x1a9) == '\x18') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
