/**
 * FUN_00747854.c
 * Source line: 1103574
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00747854(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0051b110(*param_1,*(undefined1 *)((int)param_1 + 5),
                               *(undefined2 *)((int)param_1 + 6));
  iVar2 = 0;
  if (piVar1 != NULL) {
    if (param_2 != 0) {
      *(bool *)param_2 = *piVar1 == *param_1;
    }
    iVar2 = piVar1[3];
  }
  return iVar2;
}
