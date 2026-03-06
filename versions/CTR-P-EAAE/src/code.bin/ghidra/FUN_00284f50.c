/**
 * FUN_00284f50.c
 * Source line: 329419
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00284f50(Item_t *param_1,uint param_2)

{
  undefined2 uVar1;
  
  if (0xa4 < param_2) {
    return;
  }
  uVar1 = Item_GetRawID(param_1);
  *(undefined2 *)(&DAT_00998360 + param_2 * 2) = uVar1;
  return;
}
