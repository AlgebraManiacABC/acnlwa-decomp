/**
 * FUN_001aba5c.c
 * Source line: 215617
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001aba5c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ed570(param_1 + 0x22c);
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x220) + 0xc))();
  iVar1 = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 0x800;
  return;
}
