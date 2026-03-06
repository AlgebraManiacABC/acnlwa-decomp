/**
 * FUN_00755a68.c
 * Source line: 1111511
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00755a68(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  *param_2 = (short)uVar1;
  *param_3 = (short)((uint)uVar1 >> 0x10);
  return;
}
