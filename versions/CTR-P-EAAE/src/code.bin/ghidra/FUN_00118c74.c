/**
 * FUN_00118c74.c
 * Source line: 117093
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00118c74(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = FUN_00301e20(param_1);
    if (iVar1 != 0) {
      iVar2 += 1;
    }
    uVar3 += 1;
    param_1 += 0x2518;
  } while (uVar3 < 10);
  return iVar2;
}
