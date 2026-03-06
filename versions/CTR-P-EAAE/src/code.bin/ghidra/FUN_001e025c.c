/**
 * FUN_001e025c.c
 * Source line: 246576
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001e025c(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_002fb918();
    uVar2 = FUN_003506c8(0x863);
    *(int *)(iVar1 + 8) = (int)uVar2;
    *(int *)(iVar1 + 4) = (int)((ulonglong)uVar2 >> 0x20);
    *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) | 1;
    return;
  }
  iVar1 = FUN_002fb918();
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) & 0xfffe;
  return;
}
