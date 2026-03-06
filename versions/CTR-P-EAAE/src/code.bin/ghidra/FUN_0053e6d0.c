/**
 * FUN_0053e6d0.c
 * Source line: 783240
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0053e6d0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((char)param_1[0x13] != '\0' && param_2 != 0) {
    *(undefined4 *)(param_2 + 0x2c) = param_5;
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    *(int *)(param_2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int **)(param_2 + 8) = param_1;
    }
  }
  return;
}
