/**
 * FUN_00333cf4.c
 * Source line: 435408
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00333cf4(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x6f10);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  FUN_002f6b14(piVar1);
  *(undefined1 *)(param_1 + 0x63a7) = 0;
  return;
}
