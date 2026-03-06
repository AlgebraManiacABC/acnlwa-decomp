/**
 * FUN_00764634.c
 * Source line: 1123035
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00764634(undefined4 param_1,Item_t *param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *pIVar1;
  undefined4 uVar2;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  pIVar1 = Item_CopyAndReturn(&IStack_10,param_2);
  uVar2 = FUN_006d318c(pIVar1,param_3);
  return uVar2;
}
