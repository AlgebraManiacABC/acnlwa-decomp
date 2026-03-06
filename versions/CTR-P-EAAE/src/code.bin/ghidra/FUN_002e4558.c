/**
 * FUN_002e4558.c
 * Source line: 379989
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_002e4558(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0050d464(&DAT_00a22020,1);
  if (iVar2 == 0) {
    iVar2 = FUN_00746f8c(&DAT_00a22020);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = 4;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x54) = uVar1;
  return 1;
}
