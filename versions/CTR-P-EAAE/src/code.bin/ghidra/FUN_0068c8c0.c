/**
 * FUN_0068c8c0.c
 * Source line: 992945
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0068c8c0(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    iVar1 = param_1 + 0x8c7;
    FUN_00316efc(iVar1,5,0);
    FUN_00316f4c(param_1 + 0x8c5,5,0);
    FUN_00316f4c(param_1 + 0x8c5,6,1);
    *(undefined1 *)(param_1 + 0x8c8) = 0;
    FUN_00316efc(iVar1,0,1);
    FUN_00316efc(iVar1,1,0);
    FUN_00316efc(iVar1,2,0);
  }
  FUN_00656e5c(0x40800000,param_1);
  return;
}
