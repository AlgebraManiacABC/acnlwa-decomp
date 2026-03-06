/**
 * FUN_002cd2e0.c
 * Source line: 367829
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002cd2e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108) + param_3 * 0x518;
  *(undefined4 *)(iVar1 + 0xcc) = param_2;
  *(undefined1 *)(iVar1 + 0xda) = 1;
  return;
}
