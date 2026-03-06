/**
 * FUN_002f6adc.c
 * Source line: 388840
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002f6adc(int param_1)

{
  int *piVar1;
  
  piVar1 = NULL;
  while( true ) {
    if (piVar1 == NULL) {
      piVar1 = *(int **)(param_1 + 4);
    }
    else {
      piVar1 = (int *)piVar1[2];
    }
    if (piVar1 == NULL) break;
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return;
}
