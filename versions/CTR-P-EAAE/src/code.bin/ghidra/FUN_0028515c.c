/**
 * FUN_0028515c.c
 * Source line: 329456
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0028515c(Item_t *param_1,uint param_2)

{
  if (param_2 < 0xa5) {
    Item_Set(param_1,(uint)*(ushort *)(&DAT_00998360 + param_2 * 2));
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
  return;
}
