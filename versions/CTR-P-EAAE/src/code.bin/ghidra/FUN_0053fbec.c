/**
 * FUN_0053fbec.c
 * Source line: 784313
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0053fbec(int param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_20;
  
  local_20 = param_4;
  FUN_001277dc(0x208,&local_20);
  iVar1 = local_20;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(int *)(param_1 + 0x78) = param_4;
  *(undefined1 *)(param_1 + 0x70) = param_2;
  local_20 = FUN_00726330(param_1 + 0x6c,local_20,1);
  FUN_001279b4(local_20 - iVar1 & 0xfffffffc);
  return;
}
