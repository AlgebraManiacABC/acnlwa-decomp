/**
 * FUN_005eb804.c
 * Source line: 900541
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005eb804(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005ea1d0(param_1 + 0x98,param_1 + 0x9c,param_2);
  uVar1 &= (int)*(char *)(param_1 + 0xa0);
  *(char *)(param_1 + 0xa0) = (char)uVar1;
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  return;
}
