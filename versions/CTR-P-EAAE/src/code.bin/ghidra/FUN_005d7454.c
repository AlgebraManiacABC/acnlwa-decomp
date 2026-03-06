/**
 * FUN_005d7454.c
 * Source line: 885538
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005d7454(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_28 [20];
  uint local_14;
  int local_10 [2];
  
  if (param_3 != 0xe) {
    uVar1 = FUN_007e8fb4();
    return uVar1;
  }
  local_10[0] = *(int *)(param_4 + 4) + -2;
  FUN_005d7a8c(auStack_28,local_10);
  *(uint *)(param_4 + 4) = ((local_14 & 0xfffffffe) - 2) + *(int *)(param_4 + 4);
  return 0;
}
