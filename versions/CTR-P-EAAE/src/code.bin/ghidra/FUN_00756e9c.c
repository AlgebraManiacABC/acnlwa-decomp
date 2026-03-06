/**
 * FUN_00756e9c.c
 * Source line: 1112478
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00756e9c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00311a34(param_1 + iVar2 * 0x16 + 0x4a,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 += 1;
  } while (iVar2 < 4);
  return 0;
}
