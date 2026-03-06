/**
 * FUN_00274754.c
 * Source line: 320480
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00274754(int param_1)

{
  int iVar1;
  
  FUN_0031ec78(param_1 + 0x2788);
  iVar1 = iRam0094fd4c;
  if (iRam0094fd4c == 0) {
    *(undefined1 *)(param_1 + 0x2ca5) = 0;
    FUN_00567e24(param_1 + 0x40c,"Layout/ItemWin/item_icon.arc");
  }
  else {
    *(undefined1 *)(param_1 + 0x2ca5) = 1;
    *(int *)(param_1 + 0x654) = iVar1;
  }
  FUN_00567e24(param_1 + 0x170,"Layout/santaBag/santa_bag.arc");
  return;
}
