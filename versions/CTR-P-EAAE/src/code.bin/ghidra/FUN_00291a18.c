/**
 * FUN_00291a18.c
 * Source line: 335357
 * Body lines: 8
 */
#include "../../../include/types.h"

FUN_00291a18(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  undefined1 auStack_30 [24];
  
  FUN_005f723c(auStack_30);
  FUN_005f6eb0(auStack_30,param_1 + 0x60,param_2,2,param_3,4);
  (**(code **)(*param_4 + 0x78))(param_4,param_1 + 0x38,0);
  if (param_5 != NULL) {
    (**(code **)(*param_5 + 0x78))(param_5,param_1 + 0x38,0);
  }
  return auStack_30;
}
