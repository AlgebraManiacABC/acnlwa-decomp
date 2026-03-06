/**
 * FUN_006ce920.c
 * Source line: 1029752
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006ce920(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(char *)(DAT_0094e3c8 + 0xfb0) == '\0') && (iVar1 = FUN_00566044(), iVar1 != 0)) {
    uVar2 = param_1 + 0xa00;
    bVar3 = *(char *)(param_1 + 0xa13) == '\0';
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0xa11);
    }
    if (bVar3 && uVar2 == 0) {
      FUN_0081b960(param_1,FUN_006ceb58,0);
    }
  }
  return;
}
