/**
 * FUN_00745404.c
 * Source line: 1101477
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00745404(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;
  int extraout_r3;
  
  uVar2 = 1;
  do {
    iVar1 = FUN_007450c4(param_1,uVar2);
    if (iVar1 == extraout_r3) {
      return 1;
    }
    uVar2 = extraout_r2 + 1;
  } while (uVar2 < 0xe);
  return 0;
}
