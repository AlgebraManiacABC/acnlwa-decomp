/**
 * FUN_00568630.c
 * Source line: 810135
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00568630(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  
  *(undefined1 *)(param_2 + 0x1c) = 1;
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)(param_3 + 0x10)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x3c))
                ((int *)piVar1[2],*(undefined4 *)(param_2 + 0x18),param_4,0);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_3 + 0x10));
  }
  return;
}
