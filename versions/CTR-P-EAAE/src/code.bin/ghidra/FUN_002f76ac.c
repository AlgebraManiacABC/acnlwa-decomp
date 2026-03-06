/**
 * FUN_002f76ac.c
 * Source line: 389689
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_002f76ac(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = param_4 * param_3 + param_1;
    do {
      iVar1 -= param_3;
      (*param_2)(iVar1);
    } while (param_1 != iVar1);
  }
  return param_1 + -8;
}
