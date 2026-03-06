/**
 * FUN_005afeb8.c
 * Source line: 861272
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005afeb8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  param_1[8] = param_5;
  *param_1 = param_2;
  *(char *)(param_1 + 2) = (char)param_3;
  uVar1 = (*(code *)**(undefined4 **)*param_2)((undefined4 *)*param_2,0x8a00,4);
  param_1[5] = uVar1;
  uVar2 = FUN_0034748c(param_1 + 4,param_4);
  uVar2 = uVar2 >> 0x1f ^ 1;
  *(char *)(param_1 + 1) = (char)uVar2;
  if (uVar2 == 0 && param_3 == 0) {
    FUN_005aead8();
    return;
  }
  return;
}
