/**
 * FUN_004280e4.c
 * Source line: 591814
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004280e4(undefined1 *param_1)

{
  undefined2 uVar1;
  
  __aeabi_memset(param_1,0x3f0,0xff);
  *param_1 = 0xc;
  param_1[1] = 1;
  uVar1 = FUN_00428120();
  *(undefined2 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0x3ec) = 0x5069614d;
  return;
}
