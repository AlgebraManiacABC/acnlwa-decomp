/**
 * FUN_0052d0b8.c
 * Source line: 772028
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0052d0b8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fc900();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0061a7a0();
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
