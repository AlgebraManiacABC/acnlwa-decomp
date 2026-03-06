/**
 * FUN_0076e49c.c
 * Source line: 1131417
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0076e49c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00535a68(param_1 + (*(byte *)(param_1 + 0x24) & 1) * 0x10 + 0x3c);
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((int)((uint)*(byte *)(iVar1 + 0xd) * 0x20000000) < 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
