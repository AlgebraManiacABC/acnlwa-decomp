/**
 * FUN_00253f04.c
 * Source line: 304554
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00253f04(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  while( true ) {
    if (piVar2 == NULL) {
      return 0;
    }
    if (((int *)*piVar2 != NULL) && (iVar1 = (**(code **)(*(int *)*piVar2 + 0xa8))(), iVar1 != 0))
    break;
    piVar2 = (int *)piVar2[1];
  }
  return 1;
}
