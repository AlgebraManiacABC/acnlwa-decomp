/**
 * FUN_00636480.c
 * Source line: 950997
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00636480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  short local_20 [4];
  undefined1 auStack_18 [4];
  
  iVar1 = FUN_0075596c(param_3);
  if (iVar1 == 7) {
    FUN_00755a68(param_3,local_20,auStack_18);
    if (local_20[0] == 0) {
      uVar2 = FUN_002fb94c();
      return uVar2;
    }
  }
  return 0;
}
