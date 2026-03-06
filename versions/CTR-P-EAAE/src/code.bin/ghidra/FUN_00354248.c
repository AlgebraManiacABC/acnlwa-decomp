/**
 * FUN_00354248.c
 * Source line: 455452
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00354248(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  iVar1 = FUN_00353640(param_1 + 3);
  *(undefined1 *)(iVar1 + 0x24) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
  return;
}
