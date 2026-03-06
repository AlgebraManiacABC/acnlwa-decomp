/**
 * FUN_0053fabc.c
 * Source line: 784242
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0053fabc(int param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  local_18 = param_4;
  FUN_001277dc(0x208,&local_18);
  iVar1 = local_18;
  *(undefined1 *)(param_1 + 0x35) = param_2;
  *(undefined1 *)(param_1 + 0x36) = param_3;
  local_18 = FUN_0012d5bc(param_1 + 0x34,local_18,1);
  FUN_001279b4(local_18 - iVar1 & 0xfffffffc);
  return;
}
