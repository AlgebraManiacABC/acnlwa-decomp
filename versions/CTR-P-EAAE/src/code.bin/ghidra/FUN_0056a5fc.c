/**
 * FUN_0056a5fc.c
 * Source line: 811900
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0056a5fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_1c [2];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00135740(0xae563c);
    local_1c[0] = 0;
    FUN_0053e71c(*(undefined4 *)(param_1 + 0x30),local_1c,param_1,param_2,param_3);
    uVar1 = local_1c[0];
    FUN_00137e84(0xae563c);
  }
  return uVar1;
}
