/**
 * FUN_0011c0d0.c
 * Source line: 118865
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0011c0d0(int param_1,int param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1;
  if (param_5 != NULL) {
    while (bVar2 = param_4 != 0, param_4 += -1, bVar2) {
      (*param_5)(iVar1,param_2);
      param_2 += param_3;
      iVar1 = iVar1 + param_3;
    }
  }
  return param_1;
}
