/**
 * FUN_00713370.c
 * Source line: 1068422
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00713370(Item_t *param_1,int param_2,uint param_3)

{
  if (0xc < param_3) {
    Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
    return;
  }
  if (*(char *)(param_2 + param_3 + 0x3c) != '\0') {
    Item_Set(param_1,0x2083);
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)(param_2 + param_3 * 4));
  return;
}
