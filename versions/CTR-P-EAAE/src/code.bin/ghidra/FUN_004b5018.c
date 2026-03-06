/**
 * FUN_004b5018.c
 * Source line: 693726
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_004b5018(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_00136718(param_1,piVar1);
      if ((*(char *)((int)piVar1 + 0x25) == '\0') && (piVar1 = piVar1 + -1, piVar1 != NULL)) {
        (**(code **)*piVar1)(piVar1);
        FUN_0013ad90(piVar1);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return param_1;
}
