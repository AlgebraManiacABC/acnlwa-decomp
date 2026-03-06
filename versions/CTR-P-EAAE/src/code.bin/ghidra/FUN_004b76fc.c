/**
 * FUN_004b76fc.c
 * Source line: 695486
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004b76fc(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x38))(param_1);
  uVar1 = *(byte *)((int)param_1 + 0xb7) & 1;
  if ((*(byte *)((int)param_1 + 0xb7) & 1) != 0) {
    uVar1 = 1;
  }
  if (((param_2 & ~uVar1 & 1) == 0) && (piVar2 = (int *)param_1[5], piVar2 != param_1 + 5)) {
    do {
      (**(code **)(piVar2[-1] + 0x34))(piVar2 + -1,param_2);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != param_1 + 5);
  }
  return;
}
