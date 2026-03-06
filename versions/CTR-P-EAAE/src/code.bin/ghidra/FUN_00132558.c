/**
 * FUN_00132558.c
 * Source line: 138903
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00132558(void)

{
  int *piVar1;
  
  if (DAT_0095bf7c != 0) {
    piVar1 = *(int **)(DAT_0095bf7c + 4);
    if (piVar1 != NULL) {
      FUN_0012ca6c(DAT_0095bf7c,0);
      (**(code **)(*piVar1 + 0x10))(piVar1);
    }
    DAT_0095bf7c = 0;
  }
  return;
}
