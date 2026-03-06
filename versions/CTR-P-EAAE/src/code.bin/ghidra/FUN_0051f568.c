/**
 * FUN_0051f568.c
 * Source line: 763327
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0051f568(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + (uint)*param_1;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0x1f < uVar1) {
    uVar1 = 0x20;
  }
  *param_1 = (byte)uVar1;
  return;
}
