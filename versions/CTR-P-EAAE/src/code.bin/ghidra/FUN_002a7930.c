/**
 * FUN_002a7930.c
 * Source line: 346802
 * Body lines: 13
 */
#include "../../../include/types.h"

Item_t * FUN_002a7930(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t *pIVar2;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  iVar1 = ranqd2_ranged_int_from_seed_2(2);
  if (iVar1 != 0) {
    pIVar2 = (Item_t *)Item_Set(&IStack_10,0x2925);
    Item_Copy(param_1 + 3,pIVar2);
    return &IStack_10;
  }
  pIVar2 = (Item_t *)Item_Set(&IStack_10,0x282b);
  Item_Copy(param_1,pIVar2);
  return &IStack_10;
}
