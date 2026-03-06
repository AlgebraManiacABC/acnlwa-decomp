/**
 * FUN_00756e38.c
 * Source line: 1112456
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00756e38(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while( true ) {
    iVar3 = param_1 + iVar2 * 0x16;
    iVar1 = FUN_0071a0a0(iVar3 + 8);
    if ((iVar1 != 0) && (iVar1 = FUN_00311a34(iVar3 + 8,param_2), iVar1 == 0)) break;
    iVar2 += 1;
    if (2 < iVar2) {
      return 0;
    }
  }
  return 1;
}
