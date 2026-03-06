/**
 * FUN_004bdac4.c
 * Source line: 699746
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004bdac4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      if (*(char *)((int)piVar1 + 0xe) == '\0') {
        (**(code **)(*(int *)piVar1[2] + 0xc))((int *)piVar1[2],(short)piVar1[3],param_1);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_1 + 8));
  }
  return;
}
