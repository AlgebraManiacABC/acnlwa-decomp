/**
 * FUN_005c2cf4.c
 * Source line: 872398
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005c2cf4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c507c(0x21,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_005c5eb8(4);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
