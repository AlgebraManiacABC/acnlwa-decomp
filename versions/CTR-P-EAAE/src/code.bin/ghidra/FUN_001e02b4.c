/**
 * FUN_001e02b4.c
 * Source line: 246599
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001e02b4(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_002fb918();
    *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) | 0x100;
    return;
  }
  iVar1 = FUN_002fb918();
  *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) & 0xfeff;
  return;
}
