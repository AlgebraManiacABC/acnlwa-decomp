/**
 * FUN_0042e058.c
 * Source line: 595724
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0042e058(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = *(int *)(iRam00974a6c + 0xa4);
  *param_2 = 1;
  param_2[1] = *(undefined1 *)(iVar1 + 0x14);
  param_2[3] = 0;
  param_2[2] = 0;
  local_10 = 0;
  FUN_00730cec(iVar1 + 4,param_2 + 4,&local_10,8);
  return;
}
