/**
 * FUN_007d1728.c
 * Source line: 1178105
 * Body lines: 12
 */
#include "../../../include/types.h"

int * FUN_007d1728(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    piVar2 = *(int **)(param_1 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 8);
  }
  if ((piVar2 != NULL) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 == 0)) {
    piVar2 = (int *)FUN_007d1728(param_1,piVar2);
  }
  return piVar2;
}
