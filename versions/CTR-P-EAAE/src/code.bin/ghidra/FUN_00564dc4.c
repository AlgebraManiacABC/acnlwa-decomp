/**
 * FUN_00564dc4.c
 * Source line: 807643
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00564dc4(uint param_1)

{
  int iVar1;
  
  FUN_0024b7b8(0xf,param_1);
  FUN_006f0130(6,param_1);
  iVar1 = FUN_0029b88c(0xb);
  if (*(uint *)(iVar1 + 0xc) <= param_1) {
    FUN_0029b88c(0xb);
    FUN_002fb94c();
    return;
  }
  return;
}
