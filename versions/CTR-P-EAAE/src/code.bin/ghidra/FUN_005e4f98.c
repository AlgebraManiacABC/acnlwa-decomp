/**
 * FUN_005e4f98.c
 * Source line: 894910
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005e4f98(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x74) < 10) {
    if (*(byte *)(param_1 + 0x74) != **(byte **)(param_2 + 0x10)) {
      return;
    }
  }
  else if (9 < **(byte **)(param_2 + 0x10)) {
    return;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x260))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
