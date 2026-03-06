/**
 * FUN_00596ab0.c
 * Source line: 844115
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_00596ab0(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t *src;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  iVar1 = Item_IsID(param_1,0xc9);
  if (iVar1 != 0) {
    src = (Item_t *)Item_Set(&IStack_10,0x2959);
    Item_Copy(param_1,src);
  }
  return iVar1 != 0;
}
