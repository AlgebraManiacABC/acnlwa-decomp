/**
 * FUN_003248bc.c
 * Source line: 426692
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003248bc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fdf10(7);
  if (iVar1 == 0) {
    iVar1 = FUN_002fdf10(8);
    if (iVar1 != 0) {
      uVar2 = FUN_002fae84(iVar1);
      return uVar2;
    }
    uVar2 = 0x7ffe;
  }
  else {
    uVar2 = 0x2569;
  }
  return uVar2;
}
