/**
 * FUN_00712dc0.c
 * Source line: 1068266
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00712dc0(Item_t *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (3 < param_3) {
    Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
    return;
  }
  if (((param_3 == 3) && (iVar1 = FUN_00305f2c(), iVar1 != 2)) &&
     (iVar1 = FUN_002fc900(), iVar1 == 0)) {
    Item_Set(param_1,0x341e);
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)(param_2 + param_3 * 4));
  return;
}
