/**
 * FUN_0026f9c4.c
 * Source line: 317600
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0026f9c4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 < 2) || ((param_2 == 6 || param_2 == 7) || param_2 == 9)) {
    uVar1 = FUN_00567e24(param_1 + 700,"Layout/ItemWin/item_scrn.arc");
  }
  else {
    uVar1 = FUN_00567e24(param_1 + 700,"Layout/ItemWin/item_scrn_sel.arc");
  }
  uVar2 = FUN_00567e24(param_1 + 0x504,"Layout/ItemWin/item_icon.arc");
  return uVar2 & uVar1;
}
