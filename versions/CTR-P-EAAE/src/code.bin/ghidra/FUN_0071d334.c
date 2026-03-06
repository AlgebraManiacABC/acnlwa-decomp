/**
 * FUN_0071d334.c
 * Source line: 1074902
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0071d334(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1 += 8;
  uVar2 = 0;
  do {
    iVar1 = FUN_002fbd54(param_1 + 0x1420);
    if (iVar1 != 0) {
      iVar3 += 1;
    }
    uVar2 += 1;
    param_1 += 0x14b0;
  } while (uVar2 < 0x20);
  return iVar3;
}
