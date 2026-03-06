/**
 * FUN_003e306c.c
 * Source line: 557136
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_003e306c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(iRam00974a48 + 0x20);
  iVar2 = iVar1 + 0x78 + *(int *)(iVar1 + 0x7c) * 8;
  iVar3 = iVar2 + 8;
  bVar4 = iVar3 != iVar1 + 0x80;
  if (bVar4) {
    iVar2 = iVar1 + 0x88;
  }
  if (!bVar4 || iVar3 == iVar2) {
    iVar2 = 0;
  }
  return iVar2;
}
