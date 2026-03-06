/**
 * FUN_0067739c.c
 * Source line: 982260
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0067739c(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    iVar1 = param_1 + 0x8c7;
    FUN_00316efc(iVar1,5,0);
    FUN_00316efc(iVar1,0);
    FUN_00316efc(iVar1,1,0);
    FUN_00316efc(iVar1,2,0);
    FUN_00316f4c(param_1 + 0x8c5,6,0);
    *(undefined1 *)(param_1 + 0x8c8) = 0;
    FUN_00316f4c(param_1 + 0x8c5,5,0);
  }
  FUN_0068db1c(0,0x3f800000,0x41100000,0x40c00000,0x40c00000,param_1,0x15,0,0,0xf);
  FUN_0064e268(0x3f800000,param_1);
  return;
}
