/**
 * FUN_006c32c8.c
 * Source line: 1022460
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006c32c8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x58c) = param_2;
  iVar1 = FUN_00305f44();
  *(bool *)(param_1 + 0x590) = iVar1 == *(int *)(param_1 + 0x58c);
  return;
}
