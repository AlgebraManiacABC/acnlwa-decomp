/**
 * FUN_0070bfd8.c
 * Source line: 1063729
 * Body lines: 11
 */
#include "../../../include/types.h"

Item_t * FUN_0070bfd8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  Item_t *item;
  
  if (param_2 < 10) {
    item = (Item_t *)(param_1 + param_2 * 4);
    iVar1 = FUN_00768174(item);
    if ((iVar1 != 0) || (uVar2 = Item_IsValidID(item), uVar2 != 0)) {
      return item;
    }
  }
  return (Item_t *)&DAT_0095bfdc;
}
