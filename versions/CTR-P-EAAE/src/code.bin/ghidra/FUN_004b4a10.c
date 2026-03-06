/**
 * FUN_004b4a10.c
 * Source line: 693284
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_004b4a10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004b672c();
  if ((iVar1 < 0) || ((*(uint *)(*(int *)(param_1 + 4) + iVar1 * 0xc) & 0xff000000) == 0)) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x18) = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}
