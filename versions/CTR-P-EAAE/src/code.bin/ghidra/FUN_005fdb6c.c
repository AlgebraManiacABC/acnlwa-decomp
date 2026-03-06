/**
 * FUN_005fdb6c.c
 * Source line: 914753
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005fdb6c(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x11cd0) + 0xc) + 4) - 1;
  if (uVar1 < 0xc) {
    FUN_00312a4c(DAT_0095debc,param_1 + 0x11d18,"STR_Month",uVar1);
  }
  FUN_005edca8(param_1,param_1 + 0x11d18);
  return;
}
