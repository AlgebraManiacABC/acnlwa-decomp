/**
 * FUN_0052c1a0.c
 * Source line: 771260
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_0052c1a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = FUN_0052c2d8(0x9ab170);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined1 *)(iVar2 + 0x18) = 1;
    *(undefined1 *)(iVar2 + 0x19) = 1;
    *(undefined1 *)(iVar2 + 0xc) = 3;
    *(undefined1 *)(iVar2 + 0x1b) = 0;
    FUN_00125ca4(0x9ab170);
  }
  return iVar2 != 0;
}
