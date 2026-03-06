/**
 * FUN_0053fb08.c
 * Source line: 784260
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0053fb08(int param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  int local_20;
  
  local_20 = param_4;
  FUN_001277dc(0x208,&local_20);
  iVar1 = local_20;
  *(undefined1 *)(param_1 + 0x7c) = param_2;
  *(undefined1 *)(param_1 + 0x7d) = param_3;
  *(char *)(param_1 + 0x7e) = (char)param_4;
  local_20 = FUN_00726330(param_1 + 0x6c,local_20,1);
  FUN_001279b4(local_20 - iVar1 & 0xfffffffc);
  return;
}
