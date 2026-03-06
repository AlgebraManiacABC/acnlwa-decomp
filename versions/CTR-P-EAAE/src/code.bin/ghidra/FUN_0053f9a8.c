/**
 * FUN_0053f9a8.c
 * Source line: 784194
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0053f9a8(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  local_18 = param_4;
  FUN_001277dc(0x208,&local_18);
  iVar1 = local_18;
  if (param_2 == 0xfffffff0) {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if ((param_2 != 0xfffffff0 && param_2 != 0xfffffff1) && (param_2 < 2)) {
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(char *)(param_1 + 0x92) = (char)param_2;
  }
  local_18 = FUN_007263bc(param_1 + 0x90,local_18,1);
  FUN_001279b4(local_18 - iVar1 & 0xfffffffc);
  return;
}
