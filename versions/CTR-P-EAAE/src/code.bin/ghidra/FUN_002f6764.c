/**
 * FUN_002f6764.c
 * Source line: 388603
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002f6764(int param_1,int param_2)

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
    if (piVar1[0x32] == param_2) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
  }
  return;
}
