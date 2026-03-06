/**
 * FUN_001ff7c8.c
 * Source line: 260720
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001ff7c8(int *param_1)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x4b] != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    FUN_004b6dc8(param_1[0x42],uVar1);
  }
  if (param_1[7] != 0) {
          // WARNING: Subroutine does not return
    FUN_001323b4();
  }
  return;
}
