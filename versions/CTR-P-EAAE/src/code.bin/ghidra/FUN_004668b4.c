/**
 * FUN_004668b4.c
 * Source line: 632726
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004668b4(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 5) = param_2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 0x20;
  return;
}
