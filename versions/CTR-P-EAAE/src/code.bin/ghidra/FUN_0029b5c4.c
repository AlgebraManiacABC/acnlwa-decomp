/**
 * FUN_0029b5c4.c
 * Source line: 340272
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0029b5c4(int param_1)

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
    (**(code **)(*piVar1 + 0x58))(piVar1);
  }
  return;
}
