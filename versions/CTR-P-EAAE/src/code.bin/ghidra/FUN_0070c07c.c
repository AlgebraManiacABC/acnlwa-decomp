/**
 * FUN_0070c07c.c
 * Source line: 1063763
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0070c07c(Item_t *param_1,int param_2,uint param_3)

{
  if (1 < param_3) {
    Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)(param_2 + param_3 * 4));
  return;
}
