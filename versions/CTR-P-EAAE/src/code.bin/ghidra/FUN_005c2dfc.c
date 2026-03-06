/**
 * FUN_005c2dfc.c
 * Source line: 872491
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005c2dfc(uint param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_1 < 4) {
    param_1 &= 3;
  }
  else {
    param_1 = FUN_00305f44();
  }
  uVar2 = *(undefined1 *)((param_1 & 3) + 0xaad990);
  iVar1 = FUN_002fdf00(uVar2);
  if (iVar1 == 0) {
    uVar2 = 8;
  }
  FUN_0027ab40(uVar2);
  return;
}
