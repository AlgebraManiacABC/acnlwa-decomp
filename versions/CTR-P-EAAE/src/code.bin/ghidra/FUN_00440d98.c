/**
 * FUN_00440d98.c
 * Source line: 606673
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00440d98(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 < *(ushort *)(iRam0097d428 + 0x5e)) {
    if (param_3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + param_2 + 0x9c) = uVar1;
  }
  return;
}
