/**
 * FUN_001a0a10.c
 * Source line: 209361
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001a0a10(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(DAT_0094fd3c + 0x1e4) == 0;
  iVar1 = DAT_0094fd3c;
  if (bVar2) {
    iVar1 = *(int *)(DAT_0094fd3c + 0x1e8);
  }
  if (((bVar2 && iVar1 == 0) && (iVar1 = FUN_006d1d40(), iVar1 != 0)) &&
     (iVar1 = FUN_006d2ff4(), iVar1 != 0)) {
    FUN_008166f0(param_1 + 0x14,&UNK_001a0988,0);
  }
  return;
}
