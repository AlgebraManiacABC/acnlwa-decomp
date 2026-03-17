/**
 * FUN_006f5204.c
 * Source line: 1051411
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006f5204(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_002ff408(param_1 + uVar1 * 0x280);
    uVar1 += 1;
  } while (uVar1 < 10);
  FUN_002ff408(param_1 + 0x1900);
  FUN_00303cdc(param_1 + 0x1b80);
  return;
}
