/**
 * FUN_0070bf38.c
 * Source line: 1063709
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0070bf38(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  Item_t *item;
  
  if (param_2 < 10) {
    item = (Item_t *)(param_1 + param_2 * 4);
    iVar1 = FUN_00768174(item);
    if ((iVar1 != 0) || (uVar2 = Item_IsValidID(item), uVar2 != 0)) goto LAB_0070bf74;
  }
  item = (Item_t *)&DAT_0095bfdc;
LAB_0070bf74:
  Item_IsNullItem(item);
  return;
}
