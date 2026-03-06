/**
 * FUN_005d8708.c
 * Source line: 886292
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005d8708(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  bVar1 = FUN_005ea1d0(iVar2 + 0x98,iVar2 + 0x9c,param_2);
  *(byte *)(iVar2 + 0xa0) = bVar1 & *(byte *)(iVar2 + 0xa0);
  return;
}
