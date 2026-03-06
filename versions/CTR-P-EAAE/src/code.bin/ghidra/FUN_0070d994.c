/**
 * FUN_0070d994.c
 * Source line: 1065218
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0070d994(int *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  undefined4 uVar2;
  ItemID IVar3;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    IVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    Item_Set(&IStack_10,IVar3 & 0xffff);
    uVar2 = FUN_007699fc();
  }
  return uVar2;
}
