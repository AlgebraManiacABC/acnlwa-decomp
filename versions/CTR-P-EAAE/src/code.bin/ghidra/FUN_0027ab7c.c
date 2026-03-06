/**
 * FUN_0027ab7c.c
 * Source line: 324127
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0027ab7c(Item_t *param_1)

{
  Item_Copy(param_1,(Item_t *)&DAT_0095bfdc);
  Item_Copy(param_1 + 1,(Item_t *)&DAT_0095bfdc);
  Item_Copy(param_1 + 2,(Item_t *)&DAT_0095bfdc);
  Item_Copy(param_1 + 3,(Item_t *)&DAT_0095bfdc);
  Item_Copy(param_1 + 4,(Item_t *)&DAT_0095bfdc);
  Item_Copy(param_1 + 5,(Item_t *)&DAT_0095bfdc);
  Item_Copy(param_1 + 6,(Item_t *)&DAT_0095bfdc);
  Item_Copy(param_1 + 7,(Item_t *)&DAT_0095bfdc);
  *(undefined1 *)&param_1[8].raw_item_id = 1;
  return;
}
