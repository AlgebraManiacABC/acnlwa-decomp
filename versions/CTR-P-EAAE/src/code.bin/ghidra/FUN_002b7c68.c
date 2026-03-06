/**
 * FUN_002b7c68.c
 * Source line: 354757
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002b7c68(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_00125aec(param_1 + 1);
  iVar1 = FUN_00125aec(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined1 *)(iVar1 + 0x2c) = 2;
  return;
}
