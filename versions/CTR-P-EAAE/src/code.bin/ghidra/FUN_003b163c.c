/**
 * FUN_003b163c.c
 * Source line: 522475
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_003b163c(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0039dcb8(*(int *)(param_1 + 0xc) + 0x94,param_1,param_2,param_1 + 0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_3 != NULL) {
      *param_3 = *(undefined1 *)(param_1 + 0x10);
    }
    uVar2 = 1;
  }
  return uVar2;
}
