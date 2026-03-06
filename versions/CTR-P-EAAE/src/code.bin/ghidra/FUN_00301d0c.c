/**
 * FUN_00301d0c.c
 * Source line: 399473
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_00301d0c(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1;
  if (param_2 != NULL) {
    while (bVar2 = param_4 != 0, param_4 += -1, bVar2) {
      (*param_2)(iVar1);
      iVar1 = iVar1 + param_3;
    }
  }
  return param_1;
}
