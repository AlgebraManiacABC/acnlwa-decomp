/**
 * FUN_0053f94c.c
 * Source line: 784174
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0053f94c(int param_1,undefined1 param_2,undefined1 param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int local_20;
  
  local_20 = param_4;
  FUN_001277dc(0x208,&local_20);
  iVar1 = local_20;
  *(undefined1 *)(param_1 + 0x37) = param_2;
  *(undefined1 *)(param_1 + 0x39) = param_3;
  *(char *)(param_1 + 0x38) = (char)param_4;
  *(undefined1 *)(param_1 + 0x3a) = param_5;
  local_20 = FUN_0012d5bc(param_1 + 0x34,local_20,1);
  FUN_001279b4(local_20 - iVar1 & 0xfffffffc);
  return;
}
