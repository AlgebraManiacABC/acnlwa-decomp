/**
 * FUN_0082171c.c
 * Source line: 1232264
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0082171c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = param_1 + 0x44;
    if (uVar2 < 3) {
      iVar1 = param_1 + 0x44 + uVar2 * 4;
    }
    FUN_00136cc8(iVar1);
    uVar2 += 1;
  } while ((int)uVar2 < 3);
  FUN_0020aedc(param_1);
  return;
}
