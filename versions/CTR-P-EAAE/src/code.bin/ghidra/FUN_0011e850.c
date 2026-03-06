/**
 * FUN_0011e850.c
 * Source line: 121573
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0011e850(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_f8 [236];
  
  FUN_002fd108(0x2c,param_2,4);
  iVar1 = FUN_00120364();
  param_1[5] = iVar1;
  (**(code **)(*param_1 + 8))(param_1,param_2);
  FUN_00131a88(param_1[5]);
  (**(code **)(*param_1 + 0xc))(param_1);
  FUN_0012038c(local_f8);
  FUN_001210d4(local_f8);
  FUN_00131af8(param_1[5]);
  return;
}
