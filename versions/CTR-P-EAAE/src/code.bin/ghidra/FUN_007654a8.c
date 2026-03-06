/**
 * FUN_007654a8.c
 * Source line: 1123809
 * Body lines: 15
 */
#include "../../../include/types.h"

Item_t * FUN_007654a8(Item_t *param_1,int param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  int iVar1;
  Item_t IStack_10;
  
  if (param_2 != 0) {
    IStack_10 = param_4;
    src = (Item_t *)FUN_00751058(param_2);
    Item_CopyAndReturn(&IStack_10,src);
    iVar1 = Item_GetRawID(&IStack_10);
    if (((iVar1 == 0x3726) && (DAT_00950148 != 0)) &&
       (iVar1 = FUN_00695ed8(DAT_00950148,&LAB_00765514), iVar1 != 0)) {
      thunk_FUN_008b1b88(iVar1,param_2);
    }
    return &IStack_10;
  }
  return param_1;
}
