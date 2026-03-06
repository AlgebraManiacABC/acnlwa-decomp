/**
 * FUN_001acdc4.c
 * Source line: 216619
 * Body lines: 12
 */
#include "../../../include/types.h"

Item_t * FUN_001acdc4(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t *pIVar2;
  Item_t IStack_18;
  
  IStack_18 = param_4;
  iVar1 = FUN_003030d4(param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_007703e0(param_3,param_2), iVar1 != 1)) {
    Item_Set(&IStack_18,iVar1 + MinItemID & 0xffff);
    Item_CopyAndReturn(param_1,&IStack_18);
    return &IStack_18;
  }
  pIVar2 = Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
  return pIVar2;
}
