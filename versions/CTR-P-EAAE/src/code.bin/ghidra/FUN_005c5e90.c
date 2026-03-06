/**
 * FUN_005c5e90.c
 * Source line: 875081
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005c5e90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(param_1,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1a9) == -0x2e) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
