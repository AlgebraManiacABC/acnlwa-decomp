/**
 * FUN_005e4f10.c
 * Source line: 894870
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005e4f10(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x74) < 10) {
    if (*(byte *)(param_1 + 0x74) != param_3) {
      return;
    }
  }
  else if (9 < param_3) {
    return;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2ac))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
