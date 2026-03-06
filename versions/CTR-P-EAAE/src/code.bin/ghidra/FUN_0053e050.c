/**
 * FUN_0053e050.c
 * Source line: 782941
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0053e050(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((char)param_1[0x13] != '\0') {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x58))(param_1);
      *(int *)(param_2 + 4) = iVar1;
      if (iVar1 != 0) {
        *(int **)(param_2 + 8) = param_1;
      }
    }
  }
  return iVar1;
}
