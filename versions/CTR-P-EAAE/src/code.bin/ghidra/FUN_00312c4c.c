/**
 * FUN_00312c4c.c
 * Source line: 415725
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00312c4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_30 [28];
  
  uVar1 = FUN_005f723c(param_5,auStack_30);
  FUN_005f6eb0(auStack_30,param_1,param_2,param_3,param_4,uVar1);
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}
