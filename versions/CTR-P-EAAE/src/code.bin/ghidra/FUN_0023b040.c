/**
 * FUN_0023b040.c
 * Source line: 291545
 * Body lines: 11
 */
#include "../../../include/types.h"

FUN_0023b040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined1 auStack_5c [68];
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0 && DAT_0095debc != 0)) {
    FUN_00312bd0(auStack_5c);
    FUN_00312c4c(auStack_5c,param_2,param_4,param_5,4);
    FUN_00312ca0(iVar1,auStack_5c,param_3);
    FUN_00312cb0(auStack_5c);
    return 1;
  }
  return 0;
}
