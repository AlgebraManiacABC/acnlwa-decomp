/**
 * FUN_004b9fa4.c
 * Source line: 697293
 * Body lines: 13
 */
#include "../../../include/types.h"

int * FUN_004b9fa4(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 0) {
    piVar1 = NULL;
  }
  else {
    piVar1 = (int *)(**(code **)(*param_1 + 0xc))();
    if (piVar1 != NULL) {
      (**(code **)(*piVar1 + 0x10))(piVar1,iVar2,param_3);
    }
  }
  return piVar1;
}
