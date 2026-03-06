/**
 * FUN_00381ed0.c
 * Source line: 488698
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 * FUN_00381ed0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  undefined1 auStack_20 [16];
  
  __aeabi_uidivmod(param_3,*(undefined4 *)(param_2 + 8));
  iVar1 = *(int *)(param_2 + 4);
  FUN_00358344(auStack_20);
  FUN_003858e4(param_1,auStack_20,param_4,extraout_r1 + iVar1);
  return auStack_20;
}
