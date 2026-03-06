/**
 * FUN_0018ca4c.c
 * Source line: 202827
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0018ca4c(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  int iVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  src = (Item_t *)FUN_00751058();
  Item_CopyAndReturn(&IStack_10,src);
  if ((*(int *)(param_1 + 0x300) != 0) &&
     (((iVar1 = Item_IsID(&IStack_10,0x2b60), iVar1 != 0 ||
       (iVar1 = Item_IsID(&IStack_10,0x2b7d), iVar1 != 0)) ||
      (iVar1 = Item_IsID(&IStack_10,0x2f4f), iVar1 != 0)))) {
    (**(code **)(**(int **)(param_1 + 0x300) + 0x30))(*(int **)(param_1 + 0x300),0x10008a6);
    return 1;
  }
  return 0;
}
