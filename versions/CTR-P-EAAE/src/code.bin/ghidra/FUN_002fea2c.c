/**
 * FUN_002fea2c.c
 * Source line: 396932
 * Body lines: 14
 */
#include "../../../include/types.h"

Item_t * FUN_002fea2c(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t *pIVar2;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  iVar1 = FUN_003030d4(param_2);
  if (iVar1 != 0) {
    iVar1 = ranqd2_ranged_int_from_seed_2(iVar1);
    iVar1 = FUN_007703e0(param_2,iVar1);
    Item_Set(&IStack_10,iVar1 + MinItemID & 0xffff);
    Item_CopyAndReturn(param_1,&IStack_10);
    return &IStack_10;
  }
  pIVar2 = Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
  return pIVar2;
}
