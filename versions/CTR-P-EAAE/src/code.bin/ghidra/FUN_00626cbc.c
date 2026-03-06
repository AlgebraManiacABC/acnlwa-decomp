/**
 * FUN_00626cbc.c
 * Source line: 940624
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00626cbc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_0061a7b0();
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
