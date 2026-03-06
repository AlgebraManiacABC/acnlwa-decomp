/**
 * FUN_0056ada4.c
 * Source line: 812329
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_0056ada4(int *param_1,int param_2)

{
  int iVar1;
  
  while ((param_2 != 0 && (iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2), iVar1 == 0))) {
    param_2 = *(int *)(param_2 + 8);
  }
  return param_2;
}
