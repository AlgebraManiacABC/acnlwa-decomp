/**
 * FUN_00713074.c
 * Source line: 1068331
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00713074(int param_1,uint param_2)

{
  int iVar1;
  Item_t *pIVar2;
  
  if (param_2 < 4) {
    pIVar2 = (Item_t *)(param_1 + param_2 * 4);
    iVar1 = Item_IsNullItem(pIVar2);
    if ((iVar1 != 0) && (iVar1 = Item_IsNullItem(pIVar2 + 4), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}
