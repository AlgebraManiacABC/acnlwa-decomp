/**
 * FUN_004eccfc.c
 * Source line: 734215
 * Body lines: 5
 */
#include "../../../include/types.h"

uint FUN_004eccfc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_004eda04(*(undefined4 *)(param_1 + 0x14));
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),uVar1);
  return uVar2 >> 0x1f ^ 1;
}
