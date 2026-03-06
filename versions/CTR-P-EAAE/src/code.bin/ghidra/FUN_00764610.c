/**
 * FUN_00764610.c
 * Source line: 1123021
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00764610(undefined4 param_1,Item_t *param_2,undefined4 param_3,Item_t param_4)

{
  undefined4 uVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  Item_CopyAndReturn(&IStack_10,param_2);
  uVar1 = FUN_006d3158();
  return uVar1;
}
