/**
 * FUN_005e383c.c
 * Source line: 893681
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005e383c(int *param_1,int param_2)

{
  undefined1 auStack_18 [12];
  
  FUN_00758d74(auStack_18);
  (**(code **)(*param_1 + 0x14))(param_1,auStack_18);
  thunk_FUN_007589dc(param_2,param_1 + 6);
  FUN_005e9184(param_1 + 0xb3);
  param_1[0x181] = param_2;
  return;
}
