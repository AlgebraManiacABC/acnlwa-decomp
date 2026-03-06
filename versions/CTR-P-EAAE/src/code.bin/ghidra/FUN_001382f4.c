/**
 * FUN_001382f4.c
 * Source line: 144807
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001382f4(uint *param_1)

{
  uint uVar1;
  
  software_interrupt(GetSystemTick);
  uVar1 = ((uint)param_1 ^ (uint)param_1 >> 0x1e) * 0x6c078965 + 1;
  *param_1 = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  param_1[1] = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  param_1[2] = uVar1;
  param_1[3] = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  return;
}
