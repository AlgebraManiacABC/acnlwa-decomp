/**
 * FUN_006c568c.c
 * Source line: 1024055
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_006c568c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006c5a88();
  if (iVar1 != 0xad) {
    FUN_006c588c(param_1,param_2);
    iVar1 = FUN_005ce13c();
    if (iVar1 != 2) {
      return 0;
    }
  }
  return 1;
}
