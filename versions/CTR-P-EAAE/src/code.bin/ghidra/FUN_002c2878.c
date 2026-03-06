/**
 * FUN_002c2878.c
 * Source line: 362648
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_002c2878(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (iVar1 == 0) {
    iVar1 = DAT_0094f524 + (uint)*(byte *)(param_1 + 0x18d) * 6 + 0x1370;
    *(int *)(param_1 + 0x1ac) = iVar1;
  }
  return iVar1;
}
