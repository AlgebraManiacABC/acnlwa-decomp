/**
 * FUN_0027b3a8.c
 * Source line: 324536
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0027b3a8(Item_t *param_1,Item_t *param_2,Item_t *param_3,Item_t *param_4,Item_t *param_5,
                 Item_t *param_6,Item_t *param_7,Item_t *param_8)

{
  Item_t *pIVar1;
  
  pIVar1 = Item_CopyAndReturn(param_1,param_2);
  pIVar1 = Item_CopyAndReturn(pIVar1 + 1,param_3);
  pIVar1 = Item_CopyAndReturn(pIVar1 + 1,param_4);
  pIVar1 = Item_CopyAndReturn(pIVar1 + 1,(Item_t *)&DAT_0095bfdc);
  pIVar1 = Item_CopyAndReturn(pIVar1 + 1,param_5);
  pIVar1 = Item_CopyAndReturn(pIVar1 + 1,param_6);
  pIVar1 = Item_CopyAndReturn(pIVar1 + 1,param_7);
  pIVar1 = Item_CopyAndReturn(pIVar1 + 1,param_8);
  *(undefined1 *)&pIVar1[1].raw_item_id = 1;
  return;
}
