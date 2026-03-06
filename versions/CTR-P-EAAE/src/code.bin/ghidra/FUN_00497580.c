/**
 * FUN_00497580.c
 * Source line: 670421
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00497580(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x1c))(param_2,param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_2);
  }
  return;
}
