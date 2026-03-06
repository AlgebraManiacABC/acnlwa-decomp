/**
 * FUN_00641c1c.c
 * Source line: 955400
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00641c1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  short local_18 [2];
  undefined1 auStack_14 [8];
  
  uVar2 = 0;
  iVar1 = FUN_0075596c(param_3);
  if (iVar1 == 7) {
    uVar2 = 2;
    FUN_00755a68(param_3,local_18,auStack_14);
    if (local_18[0] == 0) {
      uVar2 = FUN_002fb94c();
      return uVar2;
    }
  }
  return uVar2;
}
