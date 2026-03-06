/**
 * FUN_0049b074.c
 * Source line: 673308
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0049b074(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x3c))(param_2,param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_2);
  }
  return;
}
