/**
 * FUN_00463154.c
 * Source line: 630307
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00463154(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    bVar2 = *(byte *)(param_1 + 7) & 0xfd;
  }
  else {
    bVar2 = *(byte *)(param_1 + 7) | 2;
  }
  *(byte *)(param_1 + 7) = bVar2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(byte *)(iVar1 + 0xf) = bVar2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 4;
  return;
}
