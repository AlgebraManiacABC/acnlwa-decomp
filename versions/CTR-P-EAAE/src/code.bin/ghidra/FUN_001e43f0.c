/**
 * FUN_001e43f0.c
 * Source line: 247831
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001e43f0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_002ff408(param_1 + uVar1 * 0x280);
    uVar1 += 1;
  } while (uVar1 < 0x50);
  FUN_00303cdc(param_1 + 0xc800);
  FUN_00303cdc(param_1 + 0xc808);
  return;
}
