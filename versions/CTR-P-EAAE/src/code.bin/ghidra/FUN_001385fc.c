/**
 * FUN_001385fc.c
 * Source line: 144944
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_001385fc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_0090601c;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[5] = param_1 + 5;
  iVar1 = FUN_0012bfec(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  iVar1 = FUN_0013a38c(iVar1 + 0x20);
  FUN_0013a37c(iVar1,0);
  return iVar1 + -0x40;
}
