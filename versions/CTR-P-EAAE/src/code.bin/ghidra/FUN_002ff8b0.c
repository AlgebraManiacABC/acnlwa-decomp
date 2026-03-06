/**
 * FUN_002ff8b0.c
 * Source line: 397717
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 FUN_002ff8b0(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 < 4) {
    param_1 &= 3;
  }
  else {
    param_1 = FUN_00305f44();
  }
  uVar1 = *(undefined1 *)((param_1 & 3) + 0xaad990);
  iVar2 = FUN_002fdf00(uVar1);
  if (iVar2 == 0) {
    uVar1 = 8;
  }
  return uVar1;
}
