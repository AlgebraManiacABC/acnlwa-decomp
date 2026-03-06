/**
 * FUN_001292e8.c
 * Source line: 130610
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001292e8(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    uVar1 -= 0x20;
  }
  if (uVar1 != 1 && uVar1 != 0xfffffff9) {
    uRam00ae0ab9 = 0;
    uRam00ae0aba = 0xf22c;
    uRam00ae0ab8 = 0;
    uRam00ae0abc = param_1;
    uRam00ae0ac0 = param_2;
    FUN_00129330(0xae0ab8);
    return;
  }
  return;
}
