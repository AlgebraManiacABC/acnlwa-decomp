/**
 * FUN_0011710c.c
 * Source line: 116077
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0011710c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00316ebc(param_1 + 0x171,5);
  if ((iVar1 != 0) && (iVar1 = FUN_00316ebc(param_1 + 0x171,0x19), iVar1 != 0)) {
    thunk_FUN_00813c8c(&DAT_00aaef14,1);
  }
  thunk_FUN_0068a3fc(param_1);
  return 1;
}
