/**
 * FUN_004b6dbc.c
 * Source line: 695084
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004b6dbc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_001408d4(*(int *)(iVar1 + 0xc) + 0x10,iVar1 + 4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return;
}
