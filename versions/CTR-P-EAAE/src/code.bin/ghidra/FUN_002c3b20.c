/**
 * FUN_002c3b20.c
 * Source line: 363577
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_002c3b20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_001f4e30();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x1c8) == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
