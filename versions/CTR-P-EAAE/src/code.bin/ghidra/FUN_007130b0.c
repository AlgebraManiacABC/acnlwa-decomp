/**
 * FUN_007130b0.c
 * Source line: 1068349
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_007130b0(Item_t *param_1,int param_2,uint param_3)

{
  Item_t *src;
  
  if (3 < param_3) {
    Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
    return;
  }
  src = (Item_t *)(param_2 + param_3 * 4);
  if (*(char *)(param_2 + param_3 + 0x20) != '\0') {
    Item_CopyAndReturn(param_1,src);
    return;
  }
  Item_CopyAndReturn(param_1,src + 4);
  return;
}
