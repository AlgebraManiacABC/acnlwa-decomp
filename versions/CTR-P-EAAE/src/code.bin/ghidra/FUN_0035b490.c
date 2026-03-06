/**
 * FUN_0035b490.c
 * Source line: 461139
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0035b490(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0x14);
  if (piVar3 != *(int **)(param_1 + 0x14)) {
    do {
      uVar1 = (**(code **)(*(int *)piVar3[2] + 0x20))();
      iVar2 = thunk_FUN_00101852(uVar1,param_2);
      if (iVar2 == 0) {
        return piVar3[2];
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x14));
  }
  return 0;
}
