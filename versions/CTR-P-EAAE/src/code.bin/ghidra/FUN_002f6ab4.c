/**
 * FUN_002f6ab4.c
 * Source line: 388817
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002f6ab4(int param_1)

{
  int *piVar1;
  
  FUN_002f67ac(param_1 + 0x1114);
  FUN_002f6e14(param_1 + 0x1114);
  piVar1 = NULL;
  while( true ) {
    if (piVar1 == NULL) {
      piVar1 = *(int **)(param_1 + 0x1118);
    }
    else {
      piVar1 = (int *)piVar1[2];
    }
    if (piVar1 == NULL) break;
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return;
}
