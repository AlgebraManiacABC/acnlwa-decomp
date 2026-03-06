/**
 * FUN_005bc900.c
 * Source line: 867823
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005bc900(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 0x16;
    iVar1 = FUN_00311a34(iVar3 + 8,param_2);
    if (iVar1 != 0) {
      FUN_0027a48c(iVar3 + 8);
    }
    iVar2 += 1;
  } while (iVar2 < 3);
  return;
}
