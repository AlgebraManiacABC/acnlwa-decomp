/**
 * FUN_0071c170.c
 * Source line: 1074335
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0071c170(Item_t *param_1,int param_2,uint param_3)

{
  if (1 < param_3) {
    Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)(param_2 + param_3 * 4 + 4));
  return;
}
