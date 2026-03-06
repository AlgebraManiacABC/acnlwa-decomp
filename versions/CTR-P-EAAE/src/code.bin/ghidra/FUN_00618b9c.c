/**
 * FUN_00618b9c.c
 * Source line: 930300
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00618b9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(byte *)(param_1 + 0x1f0) < 2) {
    *(undefined1 *)(param_1 + 0x1f0) = 2;
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x1f1) = 6;
    iVar1 = FUN_0030b6c4();
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x132b5) = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
