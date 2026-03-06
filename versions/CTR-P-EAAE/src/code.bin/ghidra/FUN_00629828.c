/**
 * FUN_00629828.c
 * Source line: 942998
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00629828(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == NULL) {
    return;
  }
  if (*param_1 == 0) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x16800,4);
    *param_1 = iVar1;
  }
  param_1[1] = 0;
  return;
}
