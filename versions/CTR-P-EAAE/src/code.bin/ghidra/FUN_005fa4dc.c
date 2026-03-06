/**
 * FUN_005fa4dc.c
 * Source line: 910670
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005fa4dc(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  
  uVar1 = 0;
  iVar2 = *(int *)(param_2 + 0x10) + 1;
  do {
    nnnstdMemCpy(auStack_24 + uVar1 * 2,iVar2,2);
    uVar1 += 1;
    iVar2 += 2;
  } while (uVar1 < 2);
  FUN_002fb94c();
  return;
}
