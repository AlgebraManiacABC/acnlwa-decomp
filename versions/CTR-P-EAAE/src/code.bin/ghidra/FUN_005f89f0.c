/**
 * FUN_005f89f0.c
 * Source line: 909100
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005f89f0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  iVar1 = *(int *)(param_2 + 0x10);
  nnnstdMemCpy(auStack_24,iVar1,4);
  iVar1 += 4;
  uVar2 = 0;
  do {
    nnnstdMemCpy(auStack_20 + uVar2 * 2,iVar1,2);
    uVar2 += 1;
    iVar1 += 2;
  } while (uVar2 < 2);
  FUN_002fb94c();
  return;
}
