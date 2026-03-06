/**
 * FUN_0038899c.c
 * Source line: 493311
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 FUN_0038899c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_003cd24c();
  iVar2 = FUN_00391588(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x178));
  uVar1 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_003cd24c();
    uVar1 = *(undefined1 *)(iVar2 + 0x30);
  }
  return uVar1;
}
