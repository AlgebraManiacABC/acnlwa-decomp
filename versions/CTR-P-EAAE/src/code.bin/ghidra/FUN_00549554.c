/**
 * FUN_00549554.c
 * Source line: 790404
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00549554(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == NULL) {
    param_2 = (int *)FUN_003045a8(DAT_00975338);
  }
  iVar1 = param_3 - *param_1 >> 2;
  param_1[1] = iVar1;
  iVar1 = (**(code **)(*param_2 + 0x24))(param_2,*param_1,iVar1 << 2);
  *param_1 = iVar1;
  return param_1[1];
}
