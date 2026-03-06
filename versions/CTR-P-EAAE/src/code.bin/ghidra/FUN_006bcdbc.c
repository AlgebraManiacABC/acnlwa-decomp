/**
 * FUN_006bcdbc.c
 * Source line: 1018885
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006bcdbc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0076d7b0();
  FUN_00303534(param_1 + 0x6b94,uVar1);
  *(byte *)(param_1 + 0x8f83) = *(byte *)(param_1 + 0x8f83) | 0x10;
  return;
}
