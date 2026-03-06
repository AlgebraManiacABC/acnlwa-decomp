/**
 * FUN_00754a70.c
 * Source line: 1110290
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00754a70(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x34) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x40);
    iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 0x16) + *(int *)(param_1 + 8) * 0x10;
  }
  return iVar1;
}
