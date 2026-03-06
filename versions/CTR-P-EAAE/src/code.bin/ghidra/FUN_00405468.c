/**
 * FUN_00405468.c
 * Source line: 572724
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_00405468(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,0);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return piVar1 != NULL;
}
