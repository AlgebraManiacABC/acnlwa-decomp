/**
 * FUN_003314f8.c
 * Source line: 434296
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_003314f8(undefined2 *param_1,Item_t *param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_0030bb10(param_2);
  if (((iVar2 != 0) || (iVar2 = Item_IsNullItem(param_2), iVar2 != 0)) && (param_3 < 10)) {
    uVar1 = Item_GetRawID(param_2);
    *param_1 = uVar1;
    *(char *)(param_1 + 1) = (char)param_3;
    return 1;
  }
  return 0;
}
