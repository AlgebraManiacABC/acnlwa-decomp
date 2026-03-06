/**
 * FUN_00404f7c.c
 * Source line: 572519
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00404f7c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_003e41a4(param_1 + 0x84,param_2,0x20000,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x44);
  }
  return iVar1 != 0 && iVar2 != -1;
}
