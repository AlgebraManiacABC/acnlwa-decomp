/**
 * FUN_006d96fc.c
 * Source line: 1035989
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006d96fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (iRam0095063c != 0) {
    iVar1 = FUN_00305f44();
    uVar2 = 0;
    if (*(int *)(iRam0095063c + iVar1 * 8 + 0x34) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}
