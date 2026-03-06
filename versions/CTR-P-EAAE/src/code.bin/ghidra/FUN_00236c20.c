/**
 * FUN_00236c20.c
 * Source line: 288719
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00236c20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_58 [68];
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0 && DAT_0095debc != 0)) {
    FUN_00312bd0(auStack_58);
    FUN_005e32a0(auStack_58,param_2,param_4);
    FUN_00312ca0(iVar1,auStack_58,param_3);
    FUN_00312cb0(auStack_58);
    return 1;
  }
  return 0;
}
