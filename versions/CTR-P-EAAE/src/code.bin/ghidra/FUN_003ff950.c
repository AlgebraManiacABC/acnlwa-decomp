/**
 * FUN_003ff950.c
 * Source line: 569872
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_003ff950(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == param_1 + 8) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x24) == *(int *)(param_2 + 0x1c)) break;
    lVar2 = FUN_00730bd0(iVar1 + 0x10);
    lVar3 = FUN_00730bd0(param_2 + 8);
    if (lVar2 == lVar3) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}
