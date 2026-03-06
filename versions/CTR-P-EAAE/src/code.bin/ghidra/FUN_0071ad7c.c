/**
 * FUN_0071ad7c.c
 * Source line: 1073396
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0071ad7c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (iVar1 == 0) {
    param_2 = -1;
  }
  else {
    param_2 -= param_1[0xf29];
  }
  return param_2;
}
