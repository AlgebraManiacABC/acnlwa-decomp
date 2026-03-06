/**
 * FUN_004bb4bc.c
 * Source line: 698264
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004bb4bc(int param_1)

{
  int iVar1;
  
  FUN_004be4f8(param_1 + 0x150);
  iVar1 = *(int *)(param_1 + 0x13c);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x4d) = *(byte *)(iVar1 + 0x4d) & 0xfb;
  }
  return;
}
