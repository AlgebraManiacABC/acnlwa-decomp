/**
 * FUN_003927f0.c
 * Source line: 500438
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_003927f0(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &UNK_008fd8b0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = FUN_003619b0(0x80);
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[4] = iVar1 + 0x80;
  *param_1 = &UNK_008fc5c8;
  *(undefined1 *)((int)param_1 + 5) = param_2;
  FUN_00835e1c(param_1 + 2,param_3);
  return param_1;
}
