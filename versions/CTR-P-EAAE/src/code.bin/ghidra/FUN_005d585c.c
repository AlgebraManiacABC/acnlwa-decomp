/**
 * FUN_005d585c.c
 * Source line: 884310
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005d585c(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x11cd0) + 0x10) + 6);
  if (uVar1 < 7) {
    FUN_00312a4c(DAT_0095debc,param_1 + 0x11ef4,"STR_Week",(uint)(byte)(&DAT_0089072a)[uVar1]);
  }
  FUN_005edca8(param_1,param_1 + 0x11ef4);
  return;
}
