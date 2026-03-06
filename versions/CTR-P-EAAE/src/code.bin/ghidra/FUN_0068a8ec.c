/**
 * FUN_0068a8ec.c
 * Source line: 991996
 * Body lines: 11
 */
#include "../../../include/types.h"

Item_t * FUN_0068a8ec(undefined4 param_1,int param_2,undefined4 param_3,Item_t param_4)

{
  undefined4 *puVar1;
  int iVar2;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  puVar1 = (undefined4 *)Item_Clear(&IStack_10);
  *puVar1 = *(undefined4 *)(param_2 + 0x10);
  iVar2 = Item_IsNullItem(&IStack_10);
  if ((iVar2 == 0) && (iVar2 = FUN_002fe8a8(param_1), iVar2 != 0)) {
    Item_Copy((Item_t *)(iVar2 + 0x26),&IStack_10);
  }
  return &IStack_10;
}
