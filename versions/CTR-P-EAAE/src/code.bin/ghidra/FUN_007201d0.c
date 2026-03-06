/**
 * FUN_007201d0.c
 * Source line: 1077399
 * Body lines: 12
 */
#include "../../../include/types.h"

Item_t * FUN_007201d0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  Item_t *item;
  
  if (param_2 < 0x28) {
    item = (Item_t *)(param_1 + param_2 * 4);
    iVar1 = Item_IsNullItem(item);
    if (((iVar1 != 0) || (uVar2 = Item_IsValidID(item), uVar2 != 0)) ||
       (iVar1 = FUN_00768174(item), iVar1 != 0)) {
      return item;
    }
  }
  return (Item_t *)&DAT_0095bfdc;
}
