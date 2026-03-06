/**
 * FUN_00415604.c
 * Source line: 581079
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00415604(int param_1)

{
  int iVar1;
  
  if ((cRam00974a54 != '\0') && (iVar1 = FUN_007304d0(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0))
  {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x70))();
    if (-1 < iVar1) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      FUN_004186d4(*(undefined4 *)(param_1 + 0x14));
    }
    return iVar1;
  }
  return -0x1f5eb7d9;
}
