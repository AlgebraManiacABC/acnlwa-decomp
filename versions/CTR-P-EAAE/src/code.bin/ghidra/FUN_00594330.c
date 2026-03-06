/**
 * FUN_00594330.c
 * Source line: 842338
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00594330(Item_t *param_1,Item_t *param_2,byte param_3,undefined1 param_4,undefined1 param_5
                 )

{
  Item_Copy(param_1,param_2);
  *(byte *)((int)&param_1[1].raw_item_id + 1) = param_3;
  *(undefined1 *)&param_1[1].raw_item_id = param_5;
  *(undefined1 *)&param_1[1]._x2 = param_4;
  return;
}
