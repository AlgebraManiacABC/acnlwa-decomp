/**
 * FUN_004ee4c8.c
 * Source line: 736354
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004ee4c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_0013451c(iVar1 + 0x4c);
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  return;
}
