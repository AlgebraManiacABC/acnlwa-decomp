/**
 * FUN_002f7d80.c
 * Source line: 390179
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined8 FUN_002f7d80(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - (param_1 >> 2);
  uVar1 += uVar1 >> 4;
  uVar1 += uVar1 >> 8;
  uVar1 = uVar1 + (uVar1 >> 0x10) >> 3;
  iVar2 = (param_1 - 10) + uVar1 * -10;
  if (iVar2 < 0) {
    iVar2 += 10;
  }
  else {
    uVar1 += 1;
  }
  return CONCAT44(iVar2,uVar1);
}
