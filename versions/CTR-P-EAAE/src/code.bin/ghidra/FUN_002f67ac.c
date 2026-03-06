/**
 * FUN_002f67ac.c
 * Source line: 388626
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002f67ac(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb4);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,0);
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}
