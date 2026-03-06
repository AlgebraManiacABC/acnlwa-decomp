/**
 * FUN_001a0684.c
 * Source line: 209250
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001a0684(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(DAT_0094fd3c + 0x1e4) == 0;
  iVar1 = DAT_0094fd3c;
  if (bVar2) {
    iVar1 = *(int *)(DAT_0094fd3c + 0x1e8);
  }
  if ((bVar2 && iVar1 == 0) && (iVar1 = FUN_006d1d40(), iVar1 != 0)) {
    if (*(char *)(param_1 + 0x39) == '\x01') {
      FUN_008166f0(param_1 + 0x14,FUN_001a0260,0);
      return;
    }
    FUN_008166f0(param_1 + 0x14,FUN_001a025c,0);
  }
  return;
}
