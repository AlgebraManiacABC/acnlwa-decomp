/**
 * FUN_0030e228.c
 * Source line: 412720
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0030e228(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x2e);
  if ((bVar1 < 8) && (3 < bVar1)) {
    if (bVar1 < 8) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    return uVar2;
  }
  return 0;
}
