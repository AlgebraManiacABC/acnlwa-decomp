/**
 * FUN_00466470.c
 * Source line: 632593
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00466470(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    bVar2 = *(byte *)(param_1 + 7) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 7) | 1;
  }
  *(byte *)(param_1 + 7) = bVar2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(byte *)(iVar1 + 0xf) = bVar2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 4;
  return;
}
