/**
 * FUN_004664a4.c
 * Source line: 632614
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004664a4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = *(int *)(param_1 + 0x68);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(iVar1 + 0x20) = param_2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 2;
  return;
}
