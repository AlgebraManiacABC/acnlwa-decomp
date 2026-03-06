/**
 * FUN_005d7af4.c
 * Source line: 885883
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005d7af4(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(**(int **)(param_1 + 0x11cd0) + 6);
  if (uVar1 < 7) {
    FUN_00312a4c(DAT_0095debc,param_1 + 0x11ec8,"STR_Week",(uint)(byte)(&DAT_0089072a)[uVar1]);
  }
  FUN_005edca8(param_1,param_1 + 0x11ec8);
  return;
}
