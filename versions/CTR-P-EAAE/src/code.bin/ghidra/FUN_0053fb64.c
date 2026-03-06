/**
 * FUN_0053fb64.c
 * Source line: 784279
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0053fb64(int param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  local_18 = param_4;
  FUN_001277dc(0x208,&local_18);
  iVar1 = local_18;
  *(undefined1 *)(param_1 + 100) = param_2;
  local_18 = FUN_00726438(param_1 + 100,local_18,1);
  FUN_001279b4(local_18 - iVar1 & 0xfffffffc);
  return;
}
