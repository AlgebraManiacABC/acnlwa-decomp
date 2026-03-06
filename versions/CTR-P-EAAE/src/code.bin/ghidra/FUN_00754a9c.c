/**
 * FUN_00754a9c.c
 * Source line: 1110307
 * Body lines: 3
 */
#include "../../../include/types.h"

int FUN_00754a9c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x2c);
  return iVar1 + (uint)*(ushort *)(iVar1 + 0x16) + *(int *)(param_1 + 8) * 0x98;
}
