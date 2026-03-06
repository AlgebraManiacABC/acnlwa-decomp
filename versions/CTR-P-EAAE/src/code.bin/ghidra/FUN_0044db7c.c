/**
 * FUN_0044db7c.c
 * Source line: 614101
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0044db7c(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0044d650(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    FUN_00428a3c();
    *(undefined1 *)(iVar1 + 0x5bc) = param_2;
    *(undefined4 *)(iVar1 + 0x5c0) = param_3;
    FUN_00426950(iVar1 + 0x5c4,param_4);
    *(undefined1 *)(iVar1 + 0x5d5) = param_5;
    return iVar1;
  }
  return 0;
}
