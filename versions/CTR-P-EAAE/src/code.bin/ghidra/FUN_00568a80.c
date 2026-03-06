/**
 * FUN_00568a80.c
 * Source line: 810347
 * Body lines: 14
 */
#include "../../../include/types.h"

int * FUN_00568a80(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x2c))
                            (*(int **)(param_1 + 0x20),param_2,1);
  if (piVar1 != NULL) {
    piVar2 = (int *)(**(code **)(*piVar1 + 8))(piVar1);
    while (piVar2 != (int *)0x97514c) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == NULL) {
        return NULL;
      }
    }
  }
  return piVar1;
}
