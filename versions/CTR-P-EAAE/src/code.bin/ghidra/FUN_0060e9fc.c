/**
 * FUN_0060e9fc.c
 * Source line: 925075
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0060e9fc(int param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((0x34000000 < (int)ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 0x14))) ||
     (0x34000000 < (int)ABS(*(float *)(param_1 + 0xc) - *(float *)(param_2 + 0x1c)))) {
    uVar1 = FUN_00565cc0();
    *(undefined2 *)(param_1 + 0x20) = uVar1;
  }
  return;
}
