/**
 * FUN_00603ab0.c
 * Source line: 919590
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00603ab0(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  iVar1 = *(int *)(param_1 + 0x34c);
  FUN_005e4a28(iVar1);
  *(undefined1 *)(iVar1 + 4) = 4;
  *(undefined1 *)(iVar1 + 0xc9) = 1;
  return;
}
