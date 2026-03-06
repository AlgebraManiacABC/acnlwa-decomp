/**
 * FUN_00284ee4.c
 * Source line: 329401
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00284ee4(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  FUN_00284b58(auStack_30,auStack_28,auStack_24,auStack_1c);
  FUN_003171b4(param_1,param_2,auStack_30);
  FUN_003171b4(param_3,param_4,auStack_24);
  *param_3 = *param_3 + -1;
  *param_4 = *param_4 + -1;
  return;
}
