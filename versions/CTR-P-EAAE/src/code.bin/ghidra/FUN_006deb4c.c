/**
 * FUN_006deb4c.c
 * Source line: 1038575
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_006deb4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  uVar1 = FUN_005b1a08(auStack_18,param_1 + 0xf14);
  iVar3 = *(int *)(param_1 + 0xe94);
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_00755ad4(uVar1,iVar3 + 0xc);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 + 8);
  }
  return iVar3 + 0x14;
}
