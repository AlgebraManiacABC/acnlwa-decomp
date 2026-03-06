/**
 * FUN_005ca5d8.c
 * Source line: 878588
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_005ca5d8(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_3;
  *param_3 = 0;
  iVar1 = FUN_003193e8(param_2,param_4 - (param_2 - param_1),0xffffffff);
  *param_3 = iVar2;
  return iVar1 == iVar2;
}
