/**
 * FUN_00618b38.c
 * Source line: 930282
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_00618b38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0050d260(&DAT_00a22020);
  if (iVar1 != 0) {
    FUN_00617f90(param_1,0,param_3);
    local_10 = FUN_0070ab10(DAT_009529cc);
    FUN_0061ee74(param_1 + 0x27a0,0,&local_10);
  }
  return iVar1 != 0;
}
