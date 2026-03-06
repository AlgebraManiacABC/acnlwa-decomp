/**
 * FUN_0011b468.c
 * Source line: 117902
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0011b468(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_002fe574(uVar2 * 4 + param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 += 1;
  } while (uVar2 < 8);
  return 0;
}
