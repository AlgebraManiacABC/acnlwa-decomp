/**
 * FUN_005d5d28.c
 * Source line: 884542
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005d5d28(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x11cd0) + 0x10) + 4) - 1;
  if (uVar1 < 0xc) {
    FUN_00312a4c(DAT_0095debc,param_1 + 0x11d18,"STR_Month",uVar1);
  }
  FUN_005edca8(param_1,param_1 + 0x11d18);
  return;
}
