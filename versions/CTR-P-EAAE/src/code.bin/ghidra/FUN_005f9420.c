/**
 * FUN_005f9420.c
 * Source line: 909739
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005f9420(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_38 [28];
  
  uVar1 = 0;
  iVar2 = *(int *)(param_2 + 0x10) + 1;
  do {
    nnnstdMemCpy(auStack_38 + uVar1 * 2,iVar2,2);
    uVar1 += 1;
    iVar2 += 2;
  } while (uVar1 < 0xc);
  GET_DAT_0095bf74();
  return;
}
