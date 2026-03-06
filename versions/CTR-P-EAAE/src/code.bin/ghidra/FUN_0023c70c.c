/**
 * FUN_0023c70c.c
 * Source line: 292576
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0023c70c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00304ca4(param_1,param_2,0x800000,0);
  *(undefined4 *)(iVar1 + 0x38) = param_2;
  *(undefined1 *)(iVar1 + 0x3c) = param_3;
  return;
}
