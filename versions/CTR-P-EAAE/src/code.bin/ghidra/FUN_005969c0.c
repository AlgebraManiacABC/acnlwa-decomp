/**
 * FUN_005969c0.c
 * Source line: 844077
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005969c0(Item_t *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Item_t IStack_1c;
  Item_t IStack_18;
  Item_t IStack_14;
  
  Item_CopyAndReturn(&IStack_1c,param_1);
  Item_CopyAndReturn(&IStack_18,param_1);
  uVar1 = FUN_00599ca0(&IStack_1c,&IStack_18);
  uVar2 = Item_Set(&IStack_14,0x9e);
  uVar1 = FUN_0059f194(0xb,uVar2,&IStack_1c,&IStack_18,param_2,param_3,0,uVar1,0,0,0);
  return uVar1;
}
