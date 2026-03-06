/**
 * FUN_0044cce0.c
 * Source line: 613461
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0044cce0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}
