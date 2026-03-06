/**
 * FUN_0054a0c4.c
 * Source line: 790684
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0054a0c4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  local_10 = param_4;
  FUN_007b0c40();
  FUN_001277dc(0x201,&local_10);
  if (local_10 != 0) {
    FUN_007b1898();
  }
  FUN_007b0d9c();
  FUN_007b092c();
  *(int *)(param_1 + 0x124) = 1 - *(int *)(param_1 + 0x124);
  return;
}
