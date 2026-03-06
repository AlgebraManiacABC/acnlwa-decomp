/**
 * FUN_006065d8.c
 * Source line: 921324
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_006065d8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != NULL) {
    if (piVar1[0x1f] != 3 && piVar1[0x1f] != 4) {
      return 0;
    }
    (**(code **)(*piVar1 + 8))();
    if (*(int **)(param_1 + 0x20) != NULL) {
      (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 1;
}
