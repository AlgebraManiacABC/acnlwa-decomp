/**
 * FUN_005da4a4.c
 * Source line: 887023
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005da4a4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int local_10;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    local_10 = param_4;
    FUN_00755ab4(param_3,&local_10);
    if (local_10 != 0) {
      uVar1 = FUN_002fb94c();
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}
