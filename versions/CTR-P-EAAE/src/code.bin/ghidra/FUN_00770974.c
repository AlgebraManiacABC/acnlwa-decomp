/**
 * FUN_00770974.c
 * Source line: 1133286
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00770974(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00758104(param_1 + uVar2 * 0x280);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 += 1;
  } while (uVar2 < 10);
  return 0;
}
